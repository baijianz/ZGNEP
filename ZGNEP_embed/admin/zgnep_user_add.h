#ifndef ZGNEP_USER_ADD_H
#define ZGNEP_USER_ADD_H

#include <QWidget>
#include <QDialog>
namespace Ui {
class zgnep_user_add;
}

class zgnep_user_add : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_user_add(QWidget *parent = nullptr);
    ~zgnep_user_add();

private slots:
    void on_btn_confrim_clicked();

    void on_btnExit_clicked();

private:
    Ui::zgnep_user_add *ui;
};

#endif // ZGNEP_USER_ADD_H
