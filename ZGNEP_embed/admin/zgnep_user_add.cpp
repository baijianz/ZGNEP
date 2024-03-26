#include "zgnep_user_add.h"
#include "ui_zgnep_user_add.h"
#include "./course/zgnep_course.h"
#include "./course/zgnep_course_item.h"
#include "./account/zgnep_account_general.h"
#include "./messageBox/zgnep_msg.h"
extern QVector<zgnep_course_item *> CourseVec;
zgnep_user_add::zgnep_user_add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zgnep_user_add)
{
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    ui->setupUi(this);
    QStringList subjects = {"Mathematics", "Physics", "Chemistry", "Biology", "English", "History", "Geography", "Computer Science", "Economics", "Political Science", "Sociology", "Psychology", "Physical Education", "Art", "Music", "Foreign Languages", "Literature", "Environmental Science"};
    QStringList existSubjects = zgnep_course_item::readExistsubjectList();
    for(int i = 0; i < subjects.size(); i++)
    {
        if(!existSubjects.contains(subjects[i]))
        {
            ui->cmBoxSubject->addItem(subjects[i]);
        }
    }
    QStringList existUsers = zgnep_account_general::existUser();
    ui->cmboxTeacher->addItems(existUsers);

}

zgnep_user_add::~zgnep_user_add()
{
    delete ui;
}

void zgnep_user_add::on_btn_confrim_clicked()
{
    QString ID = zgnep_course_item::GetNewID();
    QString Name = ui->cmBoxSubject->currentText();
    QString teacherID = zgnep_account_general::readAccountIDByName(ui->cmboxTeacher->currentText());
    zgnep_course_item *model = new zgnep_course_item();
    model->teachID = teacherID;
    model->courseID = ID;
    model->teachName = ui->cmboxTeacher->currentText();
    model->courseName = Name;
    CourseVec.push_back(model);
    zgnep_course::zgnep_courseInit();
    done(1);
    this->close();

}


void zgnep_user_add::on_btnExit_clicked()
{
    done(0);
    this->close();

}
