#ifndef ZGNEP_USERTEACHERADD_H
#define ZGNEP_USERTEACHERADD_H

#include <QDialog>

namespace Ui {
class zgnep_userTeacherAdd;
}

class zgnep_userTeacherAdd : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_userTeacherAdd(QWidget *parent = nullptr);
    ~zgnep_userTeacherAdd();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::zgnep_userTeacherAdd *ui;
};

#endif // ZGNEP_USERTEACHERADD_H
