#ifndef ZGNEP_COURSE_H
#define ZGNEP_COURSE_H
#include <QTableView>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QDialog>
namespace Ui {
class zgnep_course;
}
class QModelIndex;


class zgnep_course : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_course(QWidget *parent = nullptr, int flag = 0, QString CourseID = "");
    static bool  checkTimeCourse(int weekday, int courseINdex);
    static void zgnep_courseInit();
    static void  WriteCourseInfo();
    static void DeleteCourse(QString CourseID);
    ~zgnep_course();
    QStringList list;
    QStringList WeekDayList = {"星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期日"};
    QStandardItemModel *theModel;
    QItemSelectionModel *theSelection;
    int flag = 0;
    QString courseID;
    void  Modelinit();
    Ui::zgnep_course *ui;

private:
private:


protected:


private slots:
    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_pushButton_clicked();
};

#endif // ZGNEP_COURSE_H
