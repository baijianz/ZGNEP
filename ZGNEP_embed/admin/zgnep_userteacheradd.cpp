#include "zgnep_userteacheradd.h"
#include "ui_zgnep_userteacheradd.h"
#include "./messageBox/zgnep_msg.h"
#include "./account/zgnep_account_general.h"
zgnep_userTeacherAdd::zgnep_userTeacherAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zgnep_userTeacherAdd)
{
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    ui->setupUi(this);
    QStringList subjects = {"Mathematics", "Physics", "Chemistry", "Biology", "English", "History", "Geography", "Computer Science", "Economics", "Political Science", "Sociology", "Psychology", "Physical Education", "Art", "Music", "Foreign Languages", "Literature", "Environmental Science"};
    ui->comboBox->addItems(subjects);
    ui->comboBox->setCurrentIndex(0);
}

zgnep_userTeacherAdd::~zgnep_userTeacherAdd()
{
    delete ui;
}

void zgnep_userTeacherAdd::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text().size() < 1)
    {
        zgnep_msg::zgnep_MsgBox("信息输入不完整", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
    }
    if(zgnep_account_general::CheckNameISunique(ui->lineEdit->text()))
    {
        zgnep_msg::zgnep_MsgBox("该昵称已被使用", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
    }
    QString ID = zgnep_account_general::getNewID();
    QString name = ui->lineEdit->text();
    QString passWord = "000000";
    QString image = ""; //头像为空
    QString Role = ui->comboBox->currentText();
    QString authority = "1";
    zgnep_account_general::insertModel(ID, name, image, passWord, Role, authority);
    zgnep_msg::zgnep_MsgBox(QString("登录账号为" + ID).toStdString(), MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
    done(1);
    this->close();
}

void zgnep_userTeacherAdd::on_pushButton_clicked()
{
    done(0);
    this->close();
}
