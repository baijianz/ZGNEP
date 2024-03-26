#include "zgnep_account_userlogin.h"
#include "ui_zgnep_account_userlogin.h"
#include "./loading/Loading.h"
#include "./messageBox/zgnep_msg.h"
#include "./account/zgnep_account_general.h"
#include "zgnep_main.h"
#include "./account/zgnep_account_start.h"
extern QString loginedAccountID;
zgnep_account_userLogin::zgnep_account_userLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zgnep_account_userLogin)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
}

zgnep_account_userLogin::~zgnep_account_userLogin()
{
    delete ui;
}

void zgnep_account_userLogin::resizeEvent(QResizeEvent * event)
{
   QDialog::resizeEvent(event);

   QString imagePath = ":/src/登录背景.png";
   QPixmap pixmap(imagePath);

   // 根据窗口大小缩放背景图片
   pixmap = pixmap.scaled(this->size());
   QPalette palette;
   palette.setBrush(this->backgroundRole(), QBrush(pixmap));
   this->setPalette(palette);
}

void zgnep_account_userLogin::on_pushButton_clicked()
{
    this->close();
}

void zgnep_account_userLogin::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text().size() && ui->lineEdit_2->text().size())
    {
        Loading::Loadingms(2000);
        QTimer::singleShot(2000,[=](){
            if(zgnep_account_general::verifyAccount(ui->lineEdit->text().trimmed(), ui->lineEdit_2->text().trimmed()) > 0)
            {
                if(abs(zgnep_account_general::ReadAccountAuthority(ui->lineEdit->text().trimmed())) != 1)
                {
                    zgnep_msg::zgnep_MsgBox("该账号无权限", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
                    return ;
                }
                loginedAccountID = ui->lineEdit->text().trimmed();
                ZGNEP_Main *model = new ZGNEP_Main(nullptr, loginedAccountID);
                model->show();
                auto *p = dynamic_cast<zgnep_account_start *>(this->parent());
                p->close();
                this->close();
            }
            else
            {
                zgnep_msg::zgnep_MsgBox("账户或密码不正确", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
            }
        });

    }
    else
    {
        zgnep_msg::zgnep_MsgBox("信息输入不完整", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, this);
    }
}
