#include "zgnep_photoreposity.h"
#include "ui_zgnep_photoreposity.h"
#include <QFile>
#include <QDir>
#include <./messageBox/zgnep_msg.h>
#include "./photo/zgnep_photoitem.h"
#include "./photo/zgnep_photoviewer.h"
#include "./cover/zgnep_covershow.h"
#include "zgnep_photoviewer_embed.h"
QSize zgenp_photoReposity_size;
zgnep_photoReposity *model;
zgnep_photoReposity::zgnep_photoReposity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zgnep_photoReposity)
{
    ui->setupUi(this);
}

zgnep_photoReposity::zgnep_photoReposity(QWidget *parent, QString path):
    QWidget(parent),
    ui(new Ui::zgnep_photoReposity)
{
    ui->setupUi(this);
    model = this;
    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    zgenp_photoReposity_size.setWidth(ui->scrollArea->width() / 5);
    zgenp_photoReposity_size.setHeight(ui->scrollArea->width() / 5 + 20);
    ui->label->setText("zgnep_photoReposity 相册");
#if 1
    QDir dir(path);
    if(dir.exists()) //当这个文件存在的时候
    {
        QStringList filter;
        filter << "*.pgn" << "*.jpg";
        imagesList = dir.entryInfoList(QDir::Files,  QDir::Time);
        for(auto x : imagesList)
        {
            //ui->label->setText(x.canonicalFilePath());
            zgnep_photoItem *mode = new zgnep_photoItem(this, x.canonicalFilePath());
            photoList.push_back(mode);
        }
    }
    int count  = photoList.size();
    int index = 0;
    QWidget *content = new QWidget();
    QHBoxLayout *h[(count + 4) / 5];
    QWidget *w[(count + 4) / 5];
    QWidget *WB[(count + 14) / 15];
    QVBoxLayout *VB[(count + 14) / 15];
    QVBoxLayout *VF  = new QVBoxLayout();   //最外层
    for(int k = 0; k < (count + 14) / 15; k++)  // 一共是15个一块
    {
        WB[k] = new QWidget();
        VB[k] = new QVBoxLayout();
        for(int i = 0; i < 3 && index < count; i++)  // 3行一块
        {
            h[i] = new QHBoxLayout();
            w[i] = new QWidget();
            for(int j = 0; j < 5; j++) // 5个一行
            {
                if(index < count){
                    zgnep_photoItem *mode = photoList[index++];
                    h[i]->addWidget(mode);
                }else{
                    //zgnep_photoItem *mode = new zgnep_photoItem(nullptr, "./cover/photo.png");
                    QFrame *mode = new QFrame();
                    mode->setVisible(true);
                    h[i]->addWidget(mode);
                }

            }
            w[i]->setLayout(h[i]);
            w[i]->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
            VB[k]->addWidget(w[i]);
        }
        WB[k]->setLayout(VB[k]);
        //WB[k]->setFixedHeight(338);
        VF->addWidget(WB[k]);
    }
    VF->setAlignment(Qt::AlignTop);
    content->setLayout(VF);
    content->setContentsMargins(0, 0, 0, 0);
    content->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    content->adjustSize();
    ui->scrollArea->setWidget(content);

#endif
}

zgnep_photoReposity::~zgnep_photoReposity()
{
    delete ui;
}

void zgnep_photoReposity::on_btn_Exit_clicked()
{

    if(zgnep_msg::zgnep_MsgBox("确认退出?", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, this))
    {
        this->close();
    }
    else
    {

    }
}

void zgnep_photoReposity::on_photo_show(QString path)
{
    //zgnep_photoViewer *model = new zgnep_photoViewer(this, path);
    zgnep_photoViewer_Embed *model = new zgnep_photoViewer_Embed(this, path);
    model->show();
}


