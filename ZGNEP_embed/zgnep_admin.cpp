#include "zgnep_admin.h"
#include "ui_zgnep_admin.h"
#include "./account/zgnep_account_start.h"
#include "./admin/zgnep_admin_usermanange.h"
#include "./admin/zgnep_admin_course.h"
#include "./admin/zgnep_timeset.h"
zgnep_admin::zgnep_admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zgnep_admin)
{
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    ui->setupUi(this);
}

zgnep_admin::~zgnep_admin()
{
    delete ui;
}

void zgnep_admin::on_btnExit_clicked()
{
    zgnep_account_start *model = new zgnep_account_start();
    this->close();
    model->show();
}

void zgnep_admin::on_btnUserManger_clicked()
{
    zgnep_admin_userManange *model = new zgnep_admin_userManange();
    model->show();
}

void zgnep_admin::on_btnCourseSetting_clicked()
{
    zgnep_admin_course *model = new zgnep_admin_course();
    model->show();

}

void zgnep_admin::on_btnRelated_clicked()
{
    zgnep_timeSet *model = new zgnep_timeSet();
    model->show();
}
