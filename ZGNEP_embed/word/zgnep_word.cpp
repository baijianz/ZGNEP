#include "zgnep_word.h"
#include "ui_zgnep_word.h"
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
#include <QScrollBar>
QPdfium word;
zgnep_word::zgnep_word(QWidget *parent, QString path, QWidget *p) :
    QWidget(parent),
    ui(new Ui::zgnep_word)
{

    ui->setupUi(this);
    this->p = p;
    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    ui->comboBox->addItem("50%", QVariant(1));
    ui->comboBox->addItem("100%", QVariant(2));
    ui->comboBox->addItem("200%", QVariant(4));
    ui->comboBox->setCurrentIndex(1);

    connect(this, &zgnep_word::indexChange, this, &zgnep_word::on_indexChange);
    connect(ui->scrollArea->verticalScrollBar(), &QScrollBar::valueChanged, this, &zgnep_word::onVerbarValueChanged);
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboxIndexChanged(int)));

    word_Load(path);




}

zgnep_word::~zgnep_word()
{
    delete ui;
}

void zgnep_word::word_Load(QString path)
{
    if(this->path != path && this->path.size())
    {
        zgnep_coverShow *mode = new zgnep_coverShow(nullptr, COVER_WORD);
        mode->exec();
    }
    this->path = path;
    QFileInfo info(path);
    if(!QDir(info.dir().path() + "/temp/").exists())
    {
        dir.mkdir(info.dir().path() + "/temp/");
    }

     convertPDF(path, info.dir().path() + QString("/temp/%0.pdf").arg(info.fileName()));

     word.loadFile(info.dir().path() + QString("/temp/%0.pdf").arg(info.fileName()));

     WordCount = word.pageCount();

     WordIndex = 0;

     emit indexChange();

     QWidget *container = new QWidget();

     QVBoxLayout *v = new QVBoxLayout();

     for(int i = 0; i < WordCount; i++)
     {
         QWidget *item = new QWidget();
         QHBoxLayout *h = new QHBoxLayout();
         QLabel *l = new QLabel();
         l->setPixmap(QPixmap::fromImage(word.page(i).image(WordSize)));
         l->setAlignment(Qt::AlignCenter);
         h->addWidget(l);
         item->setLayout(h);
         v->addWidget(item);
     }
     container->setLayout(v);
     container->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
     ui->scrollArea->setWidget(container);
     ui->scrollArea->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

bool zgnep_word::convertPDF(QString source, QString dest)
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

void zgnep_word::referish()
{
    WordIndex = 0;
    WordCount = 0;
    this->path = "";
}

void zgnep_word::on_btn_exit_clicked()
{
    if(zgnep_msg::zgnep_MsgBox("确认退出?", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, this))
    {
        if(this->p != nullptr){
            auto *mode = static_cast<zgnep_fileSystem *>(this->p);
            mode->show();
        }
        this->close();
    }
    else
    {

    }
}

void zgnep_word::on_indexChange()
{
    ui->label_wordIndex->setText(QString::number(WordIndex + 1));
    ui->label_wordCount->setText(QString::number(WordCount));
}

void zgnep_word::onVerbarValueChanged()
{
    int per = ui->scrollArea->verticalScrollBar()->maximum() / WordCount;
    if(ui->scrollArea->verticalScrollBar()->value() > per * (WordIndex + 1))
    {
        WordIndex = (ui->scrollArea->verticalScrollBar()->value() + (per - 1)) / per - 1;
        emit on_indexChange();
    }
    else if(ui->scrollArea->verticalScrollBar()->value() < per * (WordIndex))
    {
        WordIndex = (ui->scrollArea->verticalScrollBar()->value() + (per - 1)) / per - 1;
        emit on_indexChange();
    }

}

void zgnep_word::on_btn_open_clicked()
{
    QString s = QFileDialog::getOpenFileName(this, "选择打开的文件", "./", "*.doc *.docx");
    referish();
    word_Load(s);
}

void zgnep_word::on_comboxIndexChanged(int index)
{
     QVariant value = static_cast<QComboBox*>(sender())->itemData(index);
     WordSize = value.toInt();
     word_Load(path);
}
