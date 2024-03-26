#include "zgnep_init.h"
#include "./account/zgnep_account_general.h"
#include "./course/zgnep_course_item.h"
#include "./course/zgnep_course_time.h"
#include "./course/zgnep_course.h"
#include <QSplashScreen>
zgnep_init::zgnep_init(QPixmap pixmap, QWidget *parent):QSplashScreen(parent, pixmap)
{
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式

    bar = new QProgressBar(this);

    bar->setGeometry(0,pixmap.height()-50,pixmap.width(),30);
    resize(pixmap.size());

    zgnep_account_general *model = new zgnep_account_general();  //初始化账号信息
    zgnep_course_time::CourseTimeInit();
    zgnep_course_item::zgnep_course_init();
    zgnep_course::zgnep_courseInit();

}

void zgnep_init::setRange(int min, int max)
{
    bar->setRange(min, max);
}

void zgnep_init::updateProgress(int num)
{
    bar->setValue(num);
}

void zgnep_init::showProgressMessage(int total, const QString &msg)
{
    updateProgress(total);
    showMessage(msg);
}
