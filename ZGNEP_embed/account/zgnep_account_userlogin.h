#ifndef ZGNEP_ACCOUNT_USERLOGIN_H
#define ZGNEP_ACCOUNT_USERLOGIN_H

#include <QDialog>

namespace Ui {
class zgnep_account_userLogin;
}

class zgnep_account_userLogin : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_account_userLogin(QWidget *parent = nullptr);
    ~zgnep_account_userLogin();

protected:
    void resizeEvent(QResizeEvent *) override;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zgnep_account_userLogin *ui;
};

#endif // ZGNEP_ACCOUNT_USERLOGIN_H
