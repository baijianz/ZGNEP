#include "zgnep_admin_usermanange.h"
#include "ui_zgnep_admin_usermanange.h"
#include "./account/zgnep_account_general.h"
#include "imagedelegate.h"
#include "comboxdelegate.h"
#include "btndelegate.h"
#include "zgnep_userteacheradd.h"
extern QMap<QString, QVector<QString>> accountMap;
zgnep_admin_userManange *userManageModel;
zgnep_admin_userManange::zgnep_admin_userManange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zgnep_admin_userManange)
{
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    userManageModel = this;
    ui->setupUi(this);
    this->setWindowTitle("用户管理");
    //设置表头自适应大小
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    theModel = new QStandardItemModel(accountMap.size(), accountMap.begin().value().size() + 1, this);
    theModel->setHorizontalHeaderLabels(QStringList() << "头像" << "ID" << "昵称" << "身份" << "是否有权限" << "重置密码");

    modeInit();

    ui->tableView->setModel(theModel);
    ui->tableView->setItemDelegateForColumn(0, new ImageDelegate(ui->tableView));
    QStringList subjects = {"Mathematics", "Physics", "Chemistry", "Biology", "English", "History", "Geography", "Computer Science", "Economics", "Political Science", "Sociology", "Psychology", "Physical Education", "Art", "Music", "Foreign Languages", "Literature", "Environmental Science"};
    ui->tableView->setItemDelegateForColumn(3,new comboxDelegate(ui->tableView, subjects));
    QStringList authorityList = {"有", "无"};
    ui->tableView->setItemDelegateForColumn(4, new comboxDelegate(ui->tableView, authorityList));
    ui->tableView->setItemDelegateForColumn(5, new btnDelegate(ui->tableView, "重置密码"));
}

zgnep_admin_userManange::~zgnep_admin_userManange()
{
    delete ui;
}

void zgnep_admin_userManange::modeInit()
{
    int index = 0;
    for(auto iter = accountMap.begin(); iter != accountMap.end(); iter++)
    {
          QString ID = iter.key();
          theModel->setItem(index, 0, new QStandardItem("./account/profile/" + zgnep_account_general::readAccountImage(ID)));
          auto ItemID = new QStandardItem(ID);
          auto ItemName = new QStandardItem(zgnep_account_general::readAccountName(ID));
          auto ItemRole = new QStandardItem(zgnep_account_general::readAccountRole(ID));
          auto ItemAuthority = new QStandardItem(abs(zgnep_account_general::ReadAccountAuthority(ID)) == 1 ? "有" : "无");
          auto ItemReSetPass = new QStandardItem();
          ItemID->setEditable(false); //设置ID不能编辑
          ItemName->setEditable(false); //设置名字不能编辑
          ItemReSetPass->setEditable(false);
          if(ID == "ZGNEP_ID_000000")
          {
              ItemRole->setEditable(false);
              ItemAuthority->setEditable(false);
          }
          theModel->setItem(index, 1, ItemID);
          theModel->setItem(index, 2, ItemName);
          theModel->setItem(index, 3, ItemRole);
          theModel->setItem(index, 4, ItemAuthority);
          theModel->setItem(index++, 5, ItemReSetPass);
    }
}

void zgnep_admin_userManange::on_pushButton_clicked()
{
    zgnep_account_general::reNewWriteAccount();
    this->close();
}

void zgnep_admin_userManange::on_pushButton_2_clicked()
{
    zgnep_userTeacherAdd *model = new zgnep_userTeacherAdd();
    if(model->exec())
    {
        modeInit();
    }
}
