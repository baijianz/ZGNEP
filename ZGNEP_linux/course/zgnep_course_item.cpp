#include "zgnep_course_item.h"
#include <QFile>
#include <QTextStream>
#include "./account/zgnep_account_general.h"
#include "./messageBox/zgnep_msg.h"
#include <QMessageBox>
QVector<zgnep_course_item *> CourseVec;
QMap<QString, QString> teacherCourseContrast;
zgnep_course_item::zgnep_course_item()
{

}

QStringList zgnep_course_item::readFile()
{
    QString path = "./course/zgnep_course.zgn";
    QFile file(path);
    QStringList ans;
    if(file.exists())
    {
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&file);
        while(!in.atEnd())
        {
            ans.push_back(in.readLine());
        }
    }
    file.close();
    return  ans;
}

void zgnep_course_item::zgnep_course_init()
{
    QStringList list = readFile();
    //[ZGNEP_C_000000|Mathematics|ZGNEP_ID_000001|(1:1/2)(3:6/7)]
    for(auto x : list)
    {
        if(x.size() < 5) continue;  //防止空读
        zgnep_course_item *model = new zgnep_course_item();
        x = x.mid(1, x.size() - 2);
        QStringList l = x.split("|");
        model->courseID = l[0];
        model->courseName = l[1];
        model->teachID = l[2];
        model->teachName = zgnep_account_general::readAccountName(model->teachID);
        teacherCourseContrast[model->courseID] = model->teachID;
        QString timeString = l[3];
        QVector<QString> timeItem;
        QString tempStr = "";
        for(int i = 0; i < timeString.size(); i++)
        {
            if(timeString[i] == '(') continue;
            if(timeString[i] == ')') {timeItem.push_back(tempStr), tempStr.clear(); continue;}
            tempStr += timeString[i];
        }
        for(int i = 0; i < timeItem.size(); i++)
        {
            int day = QString(timeItem[i][0]).toInt();
            QVector<int> nodes;
            for(QString x : timeItem[i].mid(2).split('/'))
            {
                model->courseMap[day].push_back(x.toInt());
            }

        }
        CourseVec.push_back(model);
    }



}

QString zgnep_course_item::readCourseName(QString ID)
{
    for(auto  x : CourseVec)
    {
        if(x->courseID == ID)
        {
            return  x->courseName;
        }
    }
    return  "None";
}

QString zgnep_course_item::readCourseTeacherID(QString ID)
{
    for(auto  x : CourseVec)
    {
        if(x->courseID == ID)
        {
            return  x->teachID;
        }
    }
    return  "None";
}

QString zgnep_course_item::readCourseTeacherName(QString ID)
{
    QString teacherID = readCourseTeacherID(ID);
    return zgnep_account_general::readAccountName(teacherID);
}

zgnep_course_item *zgnep_course_item::getModelBYCourseID(QString ID)
{
    for(int i = 0; i < CourseVec.size(); i++)
    {
        if(CourseVec[i]->courseID == ID)
        {
            return  CourseVec[i];
        }
    }
    return new zgnep_course_item();
}

void zgnep_course_item::SetCourseTeacher(QString CourseID, QString teacherID)
{
    for(int i = 0; i < CourseVec.size(); i++)
    {
        if(CourseVec[i]->courseID == CourseID)
        {
            CourseVec[i]->teachID = teacherID;
            return ;
        }
    }
}

void zgnep_course_item::setCourseTime(QString CourseID, QMap<int, QVector<int> > mp)
{
    for(int i = 0; i < CourseVec.size(); i++)
    {
        if(CourseVec[i]->courseID == CourseID)
        {
            CourseVec[i]->courseMap = mp;
            return;
        }
    }
}

QStringList zgnep_course_item::readExistsubjectList()
{
    QStringList ans;
    for(int i = 0; i < CourseVec.size(); i++)
    {
        ans.push_back(CourseVec[i]->courseName);
    }
    return  ans;
}

QString zgnep_course_item::GetNewID()
{
    QString pattern = "ZGNEP_C_";
    int val = 0;
    QString ID = QString::number(val).rightJustified(6, '0');

    QStringList list;
    for(int i = 0; i < CourseVec.size(); i++)
    {
        list.append(CourseVec[i]->courseID);
    }
    while(list.contains(pattern + ID))
    {
        val++;
        ID = QString::number(val).rightJustified(6, '0');
    }
    return  pattern + ID;
}
