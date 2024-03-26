#ifndef ZGNEP_COURSE_ITEM_H
#define ZGNEP_COURSE_ITEM_H
#include <QString>
#include <QVector>
#include <QMap>
class zgnep_course_item
{
public:
    zgnep_course_item();
    static QStringList readFile();
    static void zgnep_course_init();
    static QString readCourseName(QString ID);
    static QString readCourseID(QString ID);
    static QString readCourseTeacherID(QString ID);
    static QString readCourseTeacherName(QString ID);
    static zgnep_course_item* getModelBYCourseID(QString ID);
    static void SetCourseTeacher(QString CourseID, QString teacherID);
    static void setCourseTime(QString CourseID, QMap<int, QVector<int>> mp);
    static QStringList readExistsubjectList();
    static QString GetNewID();


    QString courseName;
    QString courseID;
    QString teachName;
    QString teachID;
    QMap<int, QVector<int>> courseMap;
private:

};

#endif // ZGNEP_COURSE_ITEM_H
