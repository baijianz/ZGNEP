#ifndef ZGNEP_COURSEEDIT_H
#define ZGNEP_COURSEEDIT_H

#include <QWidget>
#include "zgnep_course.h"
namespace Ui {
class zgnep_courseEdit;
}

class zgnep_courseEdit : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_courseEdit(QWidget *parent = nullptr, QString courseID = "");
    ~zgnep_courseEdit();
    void init();
    QStringList list;
    void updateCourse();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zgnep_courseEdit *ui;
    QStandardItemModel *theModel;
    QString CourseID;
    QStringList WeekDayList = {"星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期日"};
    QItemSelectionModel *theSelection;
};

#endif // ZGNEP_COURSEEDIT_H
