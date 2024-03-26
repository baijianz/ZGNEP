#include "zgnep_covershow.h"
#include "ui_zgnep_covershow.h"
#include <QTimer>
#include <QApplication>
#include <QDialog>
#include <QRect>
#include <QGuiApplication>
#include <QDesktopWidget>
#include <QScreen>
zgnep_coverShow::zgnep_coverShow(QWidget *parent, QString path) :
    QDialog(parent),
    ui(new Ui::zgnep_coverShow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    ui->label->setPixmap(QPixmap(path));
    if(parent != nullptr)
    {
        // 计算父窗口的中心点
        QPoint parentCenter = parent->geometry().center();

        // 计算子窗口应该出现的位置，使其在父窗口中央
        int x = parentCenter.x() - this->width() / 2;
        int y = parentCenter.y() - this->height() / 2;

        // 移动子窗口到计算出的位置
        this->move(x, y);
    }

    QTimer::singleShot(2000, [=]() {
        done(1);
        this->close();
    });//单次定时器
}

zgnep_coverShow::~zgnep_coverShow()
{
    delete ui;
}
