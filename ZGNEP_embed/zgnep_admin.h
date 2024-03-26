#ifndef ZGNEP_ADMIN_H
#define ZGNEP_ADMIN_H

#include <QMainWindow>

namespace Ui {
class zgnep_admin;
}

class zgnep_admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit zgnep_admin(QWidget *parent = nullptr);
    ~zgnep_admin();

private slots:
    void on_btnExit_clicked();

    void on_btnUserManger_clicked();

    void on_btnCourseSetting_clicked();

    void on_btnRelated_clicked();

private:
    Ui::zgnep_admin *ui;
};

#endif // ZGNEP_ADMIN_H
