#include "zgnep_setting_amendpass.h"
#include "ui_zgnep_setting_amendpass.h"
#include "QLineEdit"
#include "./account/zgnep_account_general.h"
#include "./messageBox/zgnep_msg.h"
extern QString loginedAccountID;
zgnep_setting_amendPass::zgnep_setting_amendPass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zgnep_setting_amendPass)
{
    ui->setupUi(this);
    this->setWindowTitle("zgnep_setting_amendPass");
    ui->lineditNewPassWord->setEchoMode(QLineEdit::Password);
    ui->lineditOriginPassWord->setEchoMode(QLineEdit::Password);
    ui->lineditConfrimPassWord->setEchoMode(QLineEdit::Password);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
}

zgnep_setting_amendPass::~zgnep_setting_amendPass()
{
    delete ui;
}

void zgnep_setting_amendPass::on_btn_confirm_clicked()
{
    if(zgnep_account_general::readAccountPssWord(loginedAccountID) != ui->lineditOriginPassWord->text())
    {
        zgnep_msg::zgnep_MsgBox("原密码错误", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
        return;
    }
    if(ui->lineditNewPassWord->text() != ui->lineditConfrimPassWord->text())
    {
        QRegExp regex("^[a-zA-Z0-9]{6,20}$");
        if(regex.exactMatch(ui->lineditNewPassWord->text()))
        {
            zgnep_msg::zgnep_MsgBox("输入不满足规范", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
            return;
        }
        zgnep_msg::zgnep_MsgBox("两次输入的密码不一致", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
        return;
    }
    QString pass = ui->lineditNewPassWord->text();
    zgnep_account_general::referish(loginedAccountID, zgnep_account_general::readAccountImage(loginedAccountID), zgnep_account_general::readAccountName(loginedAccountID), pass);
    zgnep_msg::zgnep_MsgBox("修改成功", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_SUCCESS, this);
    this->close();
}

void zgnep_setting_amendPass::on_btn_cancel_clicked()
{
    this->close();
}
