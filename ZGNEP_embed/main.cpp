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
#include "./inputnew/frminputnew.h"

//#include <windows.h>
//#include <imm.h>
#pragma comment(lib, "user32.lib")//打开屏幕键盘使用头文件
#pragma comment(lib, "imm32.lib ")

extern QApplication *app;
int main(int argc, char *argv[])
{
#if __arm__

#endif
    //qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
    QApplication a(argc, argv);
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    //frmInputNew::Instance()->hide();
    app = &a;
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
