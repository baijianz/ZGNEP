#ifndef ZGNEP_ADMIN_USERMANANGE_H
#define ZGNEP_ADMIN_USERMANANGE_H

#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
class zgnep_admin_userManange;
}

class zgnep_admin_userManange : public QWidget
{
    Q_OBJECT

public:
    explicit zgnep_admin_userManange(QWidget *parent = nullptr);
    ~zgnep_admin_userManange();
    void modeInit();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zgnep_admin_userManange *ui;
    QStandardItemModel *theModel;
};

#endif // ZGNEP_ADMIN_USERMANANGE_H
