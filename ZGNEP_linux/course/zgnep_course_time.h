#ifndef ZGNEP_COURSE_TIME_H
#define ZGNEP_COURSE_TIME_H

#include <QString>

class zgnep_course_time
{
public:
    zgnep_course_time();
    QString readFile();  //读取文件
    static void CourseTimeInit();
    QString course[10];
    void WriteInfo();
private:

};

#endif // ZGNEP_COURSE_TIME_H
