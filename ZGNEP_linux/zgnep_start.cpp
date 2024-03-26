#include "zgnep_start.h"
#include "ui_zgnep_start.h"
#include <QDebug>
#include <QGuiApplication>
#include <QScreen>
#include <QRect>

ZGNEP_start::ZGNEP_start(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZGNEP_start)
{
    ui->setupUi(this);
    setWindowState(this->windowState() ^ Qt::WindowFullScreen);
    /* 获取屏幕的分辨率，Qt官方建议使用这
     * 种方法获取屏幕分辨率，防上多屏设备导致对应不上
     * 注意，这是获取整个桌面系统的分辨率
     */
    QList <QScreen *> list_screen =  QGuiApplication::screens();
#if __arm__
    /* 重设大小 */
    this->resize(list_screen.at(0)->geometry().width(),
                 list_screen.at(0)->geometry().height());
#else
    /* 否则则设置主窗体大小为800x480 */
    this->resize(800, 480);
#endif
}

ZGNEP_start::~ZGNEP_start()
{
    delete ui;
}
