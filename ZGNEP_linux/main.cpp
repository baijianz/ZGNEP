#include "zgnep_main.h"
#include "zgnep_start.h"
#include "./account/zgnep_account_start.h"
#include "zgnep_init.h"
#include <QApplication>
#include <QThread>
#include "./account/zgnep_account_general.h"
#include <QDebug>
#include "./course/zgnep_course.h"
#include "./calendar/zgnep_calendar.h"
#include <QDesktopWidget>
#include <QRect>
int main(int argc, char *argv[])
{
#if __arm__
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
#endif
    QApplication a(argc, argv);

        QDesktopWidget* desktopWidget = QApplication::desktop();
        QRect screenRect = desktopWidget->screenGeometry(desktopWidget);
        QImage Image;
        Image.load("./src/准备界面.png");    //1200x900
        QPixmap oldPixmap = QPixmap::fromImage(Image);
        QPixmap pixmap = oldPixmap.scaled(screenRect.width(), screenRect.height()); //Qt::KeepAspectRatio, Qt::SmoothTransformation

        zgnep_init splash(pixmap);  //必须要用，系统初始化在里面


    splash.show();
    splash.setRange(0,99);
    for(int i = 0; i < 100; i++)
    {
        QThread::msleep(2);
        splash.updateProgress(i);
        splash.showProgressMessage(i, "loading...");
    }


    zgnep_account_start w;
    w.show();
    splash.finish(&w); //关闭后将焦点设置到zgnep_account_start

    return a.exec();
}
