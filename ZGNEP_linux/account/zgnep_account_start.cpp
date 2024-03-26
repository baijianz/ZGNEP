#include "zgnep_account_start.h"
#include "ui_zgnep_account_start.h"
#include "zgnep_account_adminlogin.h"
#include "zgnep_account_userlogin.h"

zgnep_account_start::zgnep_account_start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zgnep_account_start)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
    //this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式WindowFullScreen

}

zgnep_account_start::~zgnep_account_start()
{
    delete ui;
}

void zgnep_account_start::resizeEvent(QResizeEvent *event)
{
        QDialog::resizeEvent(event);

       QString imagePath = ":/src/封面.jpg";
       QPixmap pixmap(imagePath);

       // 根据窗口大小缩放背景图片
       pixmap = pixmap.scaled(this->size(), Qt::KeepAspectRatioByExpanding);

       QPalette palette;
       palette.setBrush(this->backgroundRole(), QBrush(pixmap));
       this->setPalette(palette);
}

void zgnep_account_start::on_pushButton_clicked()
{
    zgnep_account_userLogin *mode = new zgnep_account_userLogin(this);
    mode->show();
}

void zgnep_account_start::on_pushButton_2_clicked()
{
    zgnep_account_adminLogin *mode = new zgnep_account_adminLogin(this);
    mode->show();
}

void zgnep_account_start::on_pushButton_3_clicked()
{
    QApplication::exit();
}
