#include "zgnep_admin_course.h"
#include "ui_zgnep_admin_course.h"
#include "./course/zgnep_course.h"
#include "./course/zgnep_course_item.h"
#include "./account/zgnep_account_general.h"
#include "imagedelegate.h"
#include "comboxdelegate.h"
#include "btndelegate.h"
#include "zgnep_user_add.h"

extern QVector<zgnep_course_item *> CourseVec;
zgnep_admin_course::zgnep_admin_course(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zgnep_admin_course)
{
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    ui->setupUi(this);
    ModeInit();

}

zgnep_admin_course::~zgnep_admin_course()
{
    delete ui;
}

void zgnep_admin_course::ModeInit()
{
    theModel = new QStandardItemModel(CourseVec.size(), 6, this);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    theModel->setHorizontalHeaderLabels(QStringList() << "课程名称" << "课程ID" << "负责老师" << "查看时间" << "修改时间" << "删除该课程");
    ui->tableView->setModel(theModel);
    int index = 0;
    for(auto *iter: CourseVec)
    {
        QStandardItem *itemName = new QStandardItem(iter->courseName);
        QStandardItem *iterID = new QStandardItem(iter->courseID);
        QStandardItem *iterTeachID = new QStandardItem(zgnep_account_general::readAccountName(iter->teachID));
        QStandardItem *iterChekDateTime = new QStandardItem("查看时间");
        QStandardItem *iterSetDatetime = new QStandardItem("修改时间");
        QStandardItem *iterDelete = new QStandardItem("删除该课程");
        theModel->setItem(index, 0, itemName);
        theModel->setItem(index, 1, iterID);
        theModel->setItem(index, 2, iterTeachID);
        theModel->setItem(index, 3, iterChekDateTime);
        theModel->setItem(index, 4, iterSetDatetime);
        theModel->setItem(index++, 5, iterDelete);
    }
    comboxDelegate *comdelegate = new comboxDelegate(this, zgnep_account_general::readAccountNameList(), 1);
    btnDelegate *btnDelegate1 = new btnDelegate(this, "查看课程安排", 1); //根据1，2，3来分别进行不同的操作
    btnDelegate *btnDelegate2 = new btnDelegate(this, "修改课程安排", 2);
    btnDelegate *btnDelegate3 = new btnDelegate(this, "删除该课程", 3);
    ui->tableView->setItemDelegateForColumn(2, comdelegate);
    ui->tableView->setItemDelegateForColumn(3, btnDelegate1);
    ui->tableView->setItemDelegateForColumn(4, btnDelegate2);
    ui->tableView->setItemDelegateForColumn(5, btnDelegate3);
}

void zgnep_admin_course::refresh()
{
    ModeInit();
}

void zgnep_admin_course::on_pushButton_clicked()
{
    this->close();
    zgnep_course::WriteCourseInfo(); //刷新信息到文件
}

void zgnep_admin_course::on_pushButton_2_clicked()
{
    zgnep_user_add *model = new zgnep_user_add();
    model->exec();
    refresh();
}
