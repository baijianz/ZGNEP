#include "zgnep_pdfview.h"
#include "ui_zgnep_pdfview.h"
#include "./device/led/zgnep_peripheral_led.h"
#include "./messageBox/zgnep_msg.h"
#include "./messageBox/zgnep_messagebox_input.h"
#include "./cover/zgnep_covershow.h"
#include "qpdfium.h"
#include <QDebug>
#include <QMouseEvent>
#include <pthread.h>
#include <iostream>
#include "qmath.h"
#include "zgnep_pdfLabel.h"
#include <QTimer>
#include <QFileDialog>
#include "./fileSystem/zgnep_filesystem.h"
#include <stdio.h>
QPdfium pdf;
int PdfIndex = 0;
int prePdfIndex = 0;

zgnep_pdfLabel *preCheck = nullptr;
zgnep_pdfLabel *curCheck = nullptr;
zgnep_pdfView  *mode;
bool zgnep_pdfView::pthreadFlag = false;
zgnep_pdfView::zgnep_pdfView(QWidget *parent, QString basePath, QString fileName) :
    QWidget(parent),
    ui(new Ui::zgnep_pdfView),PdfBasePath(basePath)
{

    ui->setupUi(this);
    ui->label_debug->setVisible(false);
    ui->splitter->setStretchFactor(0, 1);
    ui->splitter->setStretchFactor(1, 16);
    ui->splitter->setChildrenCollapsible(false); //锁住比例
    ui->comboBox->setCurrentIndex(1);
    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式

    if(QFile(QString(basePath + fileName)).exists())
    {
        pdf_load(QString(basePath + fileName));
    }
    connect(ui->verticalScrollBar, &QScrollBar::valueChanged, this, &zgnep_pdfView::on_scrollBar_valueChange);
    connect(this, &zgnep_pdfView::indexChange, this,  &zgnep_pdfView::on_pdfIndexChange);

    QTimer::singleShot(0, [=]() {

    });//单次定时器

    ui->labelPage->setText(QString::number(PdfPage));

    mode = this;

}

void zgnep_pdfView::pdf_load(QString path)
{
    if(this->PdfPath != path && this->PdfPath.size())
    {
        zgnep_coverShow *model = new zgnep_coverShow(this, COVER_PDF);
        model->exec();
    }
    PdfPath = path;
    QFileInfo info(path);

    if(!info.exists()) {zgnep_msg::zgnep_MsgBox("未知错误", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_FAILED, this); return;}
    PdfBasePath = info.dir().path();
    const std::string a = path.toUtf8().constData();

    pdf.loadFile(path);
    PdfPage = pdf.pageCount();
    PdfIndex = 0;
    for(int i = 0; i < PdfPage; i++) thumbnailImg.push_back(pdf.page(i).image(0.35));  //缩略图数据

    ui->verticalScrollBar->setRange(0, PdfPage - 1);


    QWidget* container = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(container);
    int idx = 0;

    for (const auto& img : thumbnailImg)
    {
        zgnep_pdfLabel* item = new zgnep_pdfLabel(nullptr, idx++);
        item->setPixmap(QPixmap::fromImage(img));
        layout->addWidget(item);
        labels.push_back(item);
    }

    // 设置容器的大小策略，使其能够自适应内容大小
    layout->setAlignment(Qt::AlignTop);
    container->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    container->setLayout(layout);

    // 将容器添加到 scrollArea_2 的 viewport 中
    ui->scrollArea_2->setWidget(container);
    container->adjustSize();
    zgnep_pdfLabel::labelCheck(labels.front(), true);
    preCheck = curCheck = labels.front();
    pageScollItem = ui->scrollArea_2->verticalScrollBar()->maximum() / PdfPage;
    //if(p != 0) pthread_exit(&p), pthread_join(p, nullptr);
    pthread_create(&p, nullptr, pdfShow_proc, this);  //创建线程一直展示图片
    pthreadFlag = true;
    emit on_pdfIndexChange();
}

void zgnep_pdfView::PdfShowPage(QPdfium *Pdf, int pageCount, int PageIndex)
{
    if(PageIndex >= pageCount) return;
    QPdfiumPage page = Pdf->page(PageIndex);
    QImage image = page.image(Pdfsize); //缩放比例
    ui->label_pdf->setPixmap(QPixmap::fromImage(image));

}

zgnep_pdfView::~zgnep_pdfView()
{
    delete ui;
}

void zgnep_pdfView::on_btn_exit_clicked()
{
    if(zgnep_msg::zgnep_MsgBox("确认退出?", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS,this))
    {
        if(this->parent()){
            auto *mode = static_cast<zgnep_fileSystem *>(this->parent());
            mode->show();
        }
        this->close();
    }
    else
    {

    }
}


void zgnep_pdfView::wheelEvent(QWheelEvent *event)  //滑轮
{

    event->ignore();
    static int wheelEventIdx = 0;
    if(((wheelEventIdx ++) & 1) == 1)  //每动一次都加2个，采用这种方法过滤一个。
    {
        ui->scrollArea->verticalScrollBar()->setValue(0);
        if(event->delta() < 0)  //down
        {
            PdfIndex = ZGNEP_MIN((PdfPage - 1), PdfIndex + 1);
        }
        else
        {
            PdfIndex = ZGNEP_MAX(0, PdfIndex - 1);
        }
        //ui->label_msg->setText(QString("%0").arg(PdfIndex));
        ui->verticalScrollBar->setValue(PdfIndex);
        wheelEventIdx = 0;
    }
}


void *zgnep_pdfView::pdfShow_proc(void *arg)
{
    zgnep_pdfView* instance = static_cast<zgnep_pdfView*>(arg);
    while(pthreadFlag)
    {
        instance->PdfShowPage(&pdf, instance->PdfPage, PdfIndex);
    }
}

void zgnep_pdfView::refresh()
{
    thumbnailImg.clear();
    labels.clear();
    pthreadFlag = false;

}

void zgnep_pdfView::on_comboBox_currentIndexChanged(int index)
{
    Pdfsize = qPow(2, index);
}

void zgnep_pdfView::on_scrollBar_valueChange(int value)
{
    PdfIndex = value;
    if(preCheck != nullptr) zgnep_pdfLabel::labelCheck(preCheck, false);
    curCheck = labels[value];
    preCheck = curCheck;
    zgnep_pdfLabel::labelCheck(curCheck, true);
    emit indexChange();

}

void zgnep_pdfView::on_pdfIndexChange()
{
    ui->scrollArea_2->verticalScrollBar()->setValue((PdfIndex + 0) * pageScollItem);
    ui->label_debug->setText(QString::number(ui->scrollArea_2->verticalScrollBar()->value()));
    ui->labelIndex->setText(QString::number(PdfIndex + 1));
    ui->labelPage->setText(QString::number(PdfPage));
}

void zgnep_pdfView::on_pushButton_clicked()
{
    PdfIndex = ZGNEP_MAX(0, PdfIndex - 1);
    emit on_scrollBar_valueChange(PdfIndex);
}

void zgnep_pdfView::on_pushButton_2_clicked()
{
    PdfIndex = ZGNEP_MIN((PdfPage - 1), PdfIndex + 1);
    emit on_scrollBar_valueChange(PdfIndex);
}

void zgnep_pdfView::on_btn_open_clicked()
{
    QString s = QFileDialog::getOpenFileName(this, "选择打开的文件", "./data/", "*.pdf");
    refresh();
    pdf_load(s);

}


void zgnep_pdfView::on_btn_jump_clicked()
{
    try {
        int jumpIndex = ui->lineEdit->text().toInt();
        if(jumpIndex > PdfPage)
        {
            zgnep_msg::zgnep_MsgBox("不是有效值", MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_WARNING, this);
            return;
        }
        PdfIndex = jumpIndex - 1;
        emit indexChange();
        emit on_scrollBar_valueChange(PdfIndex);
    } catch (...) {
        zgnep_msg::zgnep_MsgBox("不是有效值", MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_WARNING, this);
    }

}
