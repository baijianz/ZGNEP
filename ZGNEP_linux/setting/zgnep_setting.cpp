#include "zgnep_setting.h"
#include "ui_zgnep_setting.h"
#include "./messageBox/zgnep_msg.h"
#include "./messageBox/zgnep_messagebox_input.h"
#include <QDir>
#include "./account/zgnep_account_general.h"
#include <QFileDialog>
#include "zgnep_setting_amendpass.h"
#include "zgnep_setting_datetime.h"
#include "./account/zgnep_account_start.h"
#include "./account/zgnep_account_userlogin.h"
#include "./account/zgnep_account_general.h"
#include "./account/zgnep_account_adminlogin.h"
#include "./zgnep_main.h"
#include "./loading/Loading.h"
extern ZGNEP_Main *StaticMainMode;
extern QString loginedAccountID;

zgnep_setting::zgnep_setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zgnep_setting)
{
    ui->setupUi(this);
    //zgnep_account_general *init =new zgnep_account_general();  //转移到加载界面初始化
    ui->label_profile->setPixmap(QPixmap("./account/profile/" + zgnep_account_general::readAccountImage(loginedAccountID)));
    ui->label_profile->setScaledContents(true);
    proFilePath = zgnep_account_general::readAccountImage(loginedAccountID);

    ui->label_profile->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->lineEditName->setText(zgnep_account_general::readAccountName(loginedAccountID));
    ui->lineEditName->setReadOnly(true);
    ui->lineEditID->setText(zgnep_account_general::readAccountID(loginedAccountID));
    ui->lineEditID->setReadOnly(true);
    ui->lineEditRole->setText(zgnep_account_general::readAccountRole(loginedAccountID));
    ui->lineEditRole->setReadOnly(true);
    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式

}

zgnep_setting::~zgnep_setting()
{
    delete ui;
}

void zgnep_setting::on_btn_return_clicked()
{
    //if(zgnep_msg::zgnep_MsgBox("确定?", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, this))
    {
        this->close();
        if(nameFlag | profileFlag)
        {
           zgnep_account_general::referish(loginedAccountID, proFilePath, ui->lineEditName->text(), zgnep_account_general::readAccountPssWord(loginedAccountID));
        }
    }
}

void zgnep_setting::on_btn_shut_clicked()
{
    if(zgnep_msg::zgnep_MsgBox("确定关机?", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, this))
    {
        zgnep_account_general::referish(loginedAccountID, proFilePath, ui->lineEditName->text(), zgnep_account_general::readAccountPssWord(loginedAccountID));
        Loading::Loadingms(2000);
        QTimer::singleShot(2000,[=](){
             QApplication::exit(0);
        });
    }

}

void zgnep_setting::on_pushButton_clicked()
{

}

void zgnep_setting::on_btn_amendImage_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, "选择新头像", "./data/default", "*.jpg *.png");
    if(path.size())
    {
        ui->label_profile->setPixmap(QPixmap(path));
        ui->label_profile->setScaledContents(true);
        proFilePath = path;
        profileFlag = true;
    }
}

void zgnep_setting::on_btn_amendName_clicked()
{
    QString name = zgnep_messageBox_input::zgnep_MsgBox_input("请输入新名称", "", MSG_INPUT_TYPE::SA_NONE, this);
    if(name.size())
    {
        ui->lineEditName->setReadOnly(false);
        ui->lineEditName->setText(name);
        ui->lineEditName->setReadOnly(true);
        nameFlag = true;
    }

}

void zgnep_setting::on_pushButton_2_clicked()
{
    zgnep_setting_datetime *model = new zgnep_setting_datetime();
    int ret = model->exec();
    if(ret > 0)
    {
        zgnep_msg::zgnep_MsgBox("修改成功", MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_SUCCESS, this);
    }
    else if(ret < 0)
    {
        zgnep_msg::zgnep_MsgBox("输入的信息无效", MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_FAILED, this);
    }

}

void zgnep_setting::on_btn_amendPass_clicked()
{
    zgnep_setting_amendPass *model = new zgnep_setting_amendPass();
    model->show();
}

void zgnep_setting::on_btn_exitLogin_clicked()
{
    zgnep_account_general::referish(loginedAccountID, proFilePath, ui->lineEditName->text(), zgnep_account_general::readAccountPssWord(loginedAccountID));
    loginedAccountID = "";
    zgnep_account_start *mode = new zgnep_account_start();
    mode->show();
    this->close();
    StaticMainMode->close();
}
