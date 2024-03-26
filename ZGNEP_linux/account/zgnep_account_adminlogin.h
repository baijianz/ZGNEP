#ifndef ZGNEP_ACCOUNT_ADMINLOGIN_H
#define ZGNEP_ACCOUNT_ADMINLOGIN_H

#include <QDialog>

namespace Ui {
class zgnep_account_adminLogin;
}

class zgnep_account_adminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_account_adminLogin(QWidget *parent = nullptr);
    ~zgnep_account_adminLogin();
protected:
    void resizeEvent(QResizeEvent *) override;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zgnep_account_adminLogin *ui;
};

#endif // ZGNEP_ACCOUNT_ADMINLOGIN_H
