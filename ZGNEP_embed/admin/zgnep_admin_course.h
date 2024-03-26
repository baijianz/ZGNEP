#ifndef ZGNEP_ADMIN_COURSE_H
#define ZGNEP_ADMIN_COURSE_H

#include <QWidget>
#include <QStandardItemModel>
namespace Ui {
class zgnep_admin_course;
}

class zgnep_admin_course : public QWidget
{
    Q_OBJECT

public:
    explicit zgnep_admin_course(QWidget *parent = nullptr);
    ~zgnep_admin_course();
    void ModeInit();
    void refresh();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zgnep_admin_course *ui;
    QStandardItemModel *theModel;
};

#endif // ZGNEP_ADMIN_COURSE_H
