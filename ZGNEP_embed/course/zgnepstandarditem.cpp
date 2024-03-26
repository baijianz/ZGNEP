#include "zgnepstandarditem.h"
#include "./account/zgnep_account_general.h"
#include "./zgnep_course_item.h"
#include "./zgnep_courseitemshow.h"
#include <QMessageBox>
#include <QApplication>

zgnepStandardItem::zgnepStandardItem(const QString &text, QString courseID, QString row, QString col): QStandardItem(text)
{
    this->Time = row;
    this->weekDay = col;
    this->courseID = courseID;

}

void zgnepStandardItem::openDetail()
{
    //QMessageBox::information(nullptr, "信息", "这是一条信息消息框示例！");
//    zgnep_courseItemShow *mode = new zgnep_courseItemShow(this,zgnep_course_item::readCourseName(courseID),
//                                                          courseID, weekDay + " " + Time, teacherCourseContrast[courseID],
//                                                      "./account/profile/" +  zgnep_account_general::readAccountImage(teacherCourseContrast[courseID]),
//                                                          zgnep_account_general::readAccountName(teacherCourseContrast[courseID]));
    zgnep_courseItemShow *mode = new zgnep_courseItemShow(this, courseID, weekDay + " " + Time);
    mode->show();
}
