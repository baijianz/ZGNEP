#include "zgnep_ppt.h"
#include "ui_zgnep_ppt.h"
#include  <QProcess>
#include "qpdfium.h"
#include <QDebug>
#include <QMouseEvent>
#include <pthread.h>
#include <iostream>
#include "qmath.h"
#include "./device/led/zgnep_peripheral_led.h"
#include "./messageBox/zgnep_msg.h"
#include "./whiteBoard/zgnep_whiteboard.h"
#include "./pdf/include/qpdfium.h"
#include "./cover/zgnep_covershow.h"
#include "./fileSystem/zgnep_filesystem.h"
#include "./multiMedia/zgnep_multiMedia_audio/zgnep_multimedia_audio.h"
#include "./multiMedia/zgnep_multiMedia_video/zgnep_multimedia_video.h"
#include "./photo/zgnep_photoviewer.h"
#include "./photo/zgnep_photoreposity.h"
#include "./text/zgnep_text.h"
#include <QFileInfo>
#include "./pdf/include/zgnep_pdfview.h"
#include "./pdf/zgnep_pdfLabel.h"
#include "zgnep_pptlabel.h"
#include <QScrollBar>
QPdfium ppt;
int pptIndex;
zgnep_pptLabel *pptPreCheck;
zgnep_pptLabel *pptCurCheck;
zgnep_ppt *pptMode;

zgnep_ppt::zgnep_ppt(QWidget *parent, QString path, QWidget *p) :
    QWidget(parent),
    ui(new Ui::zgnep_ppt)
{
    ui->setupUi(this);
    this->p = p;
    pptMode = this;
    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    PPT_Load(path);

    ui->label_image->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_image->setContentsMargins(0, 0, 0, 0);
    ui->frame_4->setContentsMargins(0, 0, 0, 0);

    connect(this, &zgnep_ppt::indexChange, this, &zgnep_ppt::on_ppt_indexChanged);
    //connect(ui->scrollArea->verticalScrollBar(), &QScrollBar::valueChanged, this, &zgnep_ppt::on_scrollValueChanged);

}

zgnep_ppt::~zgnep_ppt()
{
//    QFileInfo info(path);
//    QDir tempDir(info.dir().path() + "/temp/");
//    QProcess process;
//    QStringList arguments;
//    arguments << "-rf" << tempDir.path(); // 使用 -r 选项递归删除目录及其内容，使用 -f 选项强制删除而不提示
//    process.start("rmdir", arguments);
//    process.waitForFinished(-1); // 等待进程完成
    delete ui;
}

void zgnep_ppt::on_btn_exit_clicked()
{
    if(zgnep_msg::zgnep_MsgBox("确认退出?", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, this))
    {
        if(p){
            auto *mode = static_cast<zgnep_fileSystem *>(p);
            mode->show();
        }
        this->close();
    }
    else
    {

    }
}

void zgnep_ppt::on_indexChange()
{
    ui->label_image->setPixmap(QPixmap::fromImage(ppt.page(ppt_index).image(1)));
    ui->label_index->setText(QString::number(ppt_index + 1));
    int per = ui->scrollArea->verticalScrollBar()->maximum() / ppt_count;
    if((ppt_index) - ui->scrollArea->verticalScrollBar()->value() / per > 3)
    {
        ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->value() + 5 * per);
    }
}

bool zgnep_ppt::ConvertPDF(QString source, QString dest)
{
    if(QFile(dest).exists()) return true;
    QStringList unoconvCommand;
    unoconvCommand << "-f" << "pdf" << "-o" << dest << source;

    // 执行转换命令
    QProcess unoconvProcess;
    unoconvProcess.start("unoconv", unoconvCommand);
    unoconvProcess.waitForFinished(-1);  //无限等待直至结束

    // 检查是否转换成功
    if (unoconvProcess.exitCode() == 0) {
        return  true;
    } else {
        return  false;
    }

}

void zgnep_ppt::referish()
{
    path.clear();
    thumbnailImg.clear();
    labels.clear();
    ppt_index = 0;
    ppt_count = 0;
}

void zgnep_ppt::PPT_Load(QString path)
{

    this->path = path;
    QFileInfo info(path);
    if(!QDir(info.dir().path() + "/temp/").exists())
    {
        dir.mkdir(info.dir().path() + "/temp/");
    }

    ConvertPDF(path, info.dir().path() + QString("/temp/%0.pdf").arg(info.fileName()));

    ppt.loadFile(info.dir().path() + QString("/temp/%0.pdf").arg(info.fileName()));

    ppt_count = ppt.pageCount();

    ppt_index = 0;

    for(int i = 0; i < ppt_count; i++)
    {
        thumbnailImg.push_back(ppt.page(i).image(0.35));
    }
    QWidget* container = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(container);
    int idx = 0;
    for (const auto& img : thumbnailImg)
    {
        zgnep_pptLabel* item = new zgnep_pptLabel(nullptr, idx++);
        item->setPixmap(QPixmap::fromImage(img));
        layout->addSpacerItem(new QSpacerItem(item->width(), 10));
        layout->addWidget(item);
        labels.push_back(item);
    }
    layout->setAlignment(Qt::AlignTop);
    container->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
    ui->scrollArea->setWidget(container);
    container->adjustSize();

    pptPreCheck = pptCurCheck = labels.front();
    zgnep_pptLabel::labelCheck(labels.front(), true);

    ui->label_3_count->setText(QString::number(ppt_count));

    ui->label_index->setText(QString::number(ppt_index + 1));

    ui->label_image->setPixmap(QPixmap::fromImage(ppt.page(ppt_index).image(1)));

}

void zgnep_ppt::on_btn_pre_clicked()
{
    pptPreCheck = labels[ppt_index];
    ppt_index = ZGNEP_MAX(0, ppt_index - 1);
    pptCurCheck = labels[ppt_index];
    zgnep_pptLabel::referish();
    on_indexChange();

}

void zgnep_ppt::on_btn_next_clicked()
{
    pptPreCheck = labels[ppt_index];
    ppt_index = ZGNEP_MIN(ppt_count - 1, ppt_index + 1);
    pptCurCheck = labels[ppt_index];
    zgnep_pptLabel::referish();
    on_indexChange();
}

void zgnep_ppt::on_btn_openFile_clicked()
{
    QString s = QFileDialog::getOpenFileName(this, "选择打开的文件", "./", "*.ppt *.pptx");
    referish();
    PPT_Load(s);
}

void zgnep_ppt::on_ppt_indexChanged()
{
    ppt_index = pptIndex;
    on_indexChange();

}

void zgnep_ppt::on_scrollValueChanged(int value)
{

}
