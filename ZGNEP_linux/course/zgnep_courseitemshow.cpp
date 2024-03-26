#include "zgnep_courseitemshow.h"
#include "ui_zgnep_courseitemshow.h"
#include "zgnep_course_item.h"
#include "./account/zgnep_account_general.h"
#include <QMouseEvent>
#include <QCursor>
#include <qmath.h>
extern QVector<zgnep_course_item *> CourseVec;
extern QMap<QString, QString> teacherCourseContrast;

//zgnep_courseItemShow::zgnep_courseItemShow(QWidget *parent, QString CourseName, QString CourseID, QString time, QString teacherID, QString teacherImage, QString teacherName):QDialog(parent), ui(new Ui::zgnep_courseItemShow)
//{
//    ui->setupUi(this);
//    ui->labelCourseName->setText(CourseName);
//    ui->labelCourseID->setText(CourseID);
//    ui->labelTeacherImage->setPixmap(QPixmap(teacherImage));
//    ui->labelTeacherImage->setScaledContents(true);
//    ui->label_teacherName->setText(teacherName);
//    ui->labelTeacherID->setText(teacherID);
//    ui->labelShowTime->setText("上课时间：" + time);


//}

zgnep_courseItemShow::zgnep_courseItemShow(QWidget *parent, QString CourseID, QString dateTime):QDialog(parent), ui(new Ui::zgnep_courseItemShow)
{
    ui->setupUi(this);
    QString teacherID = teacherCourseContrast[CourseID];
    ui->labelCourseID->setText(CourseID);
    ui->labelCourseName->setText(zgnep_course_item::readCourseName(CourseID));
    ui->labelShowTime->setText(dateTime);
    ui->labelTeacherImage->setPixmap(QPixmap("./account/profile/" + zgnep_account_general::readAccountImage(teacherID)));
    ui->label_teacherName->setText(zgnep_account_general::readAccountName(teacherID));
    ui->labelTeacherID->setText(teacherID);
    ui->labelTeacherImage->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->labelTeacherImage->setScaledContents(true);

    this->setMaximumSize(parent->width() / 2, parent->height() / 2);
    this->setWindowTitle("课程详情");
    this->move(qMax(QCursor::pos().x(), parent->pos().x() + this->width() - parent->width()), qMax(QCursor::pos().y(), parent->pos().y() + this->height() - parent->height()));
    this->setModal(true);

}

zgnep_courseItemShow::~zgnep_courseItemShow()
{
    delete ui;
}
