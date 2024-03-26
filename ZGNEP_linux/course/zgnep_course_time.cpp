#include "zgnep_course_time.h"
#include <stdio.h>
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <qdebug.h>

zgnep_course_time *courseTimeMode;
zgnep_course_time::zgnep_course_time()
{
    courseTimeMode = this;
    QString s = readFile();
    s = s.mid(1, s.size() - 2);  //去两边的【】
    QStringList list = s.split('|');
    for(auto &s : list)
    {
        s = s.mid(1, s.size() - 2); //remove ()
    }
    for(int i = 0; i < 10; i++) this->course[i] = list[i];


}

QString zgnep_course_time::readFile()
{
    QString path = "./course/zgnep_course_time.zgn";
    QFile file(path);
    QString ans;
    if(file.exists())
    {
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&file);
        while(!in.atEnd())
        {
            ans += (in.readLine());
        }
    }
    file.close();
    return  ans;
}

void zgnep_course_time::CourseTimeInit()
{
    zgnep_course_time * mode = new zgnep_course_time();

}

void zgnep_course_time::WriteInfo()
{
    QString path = "./course/zgnep_course_time.zgn";
    QFile file(path);
    QTextStream out(&file);
    if(file.exists())
    {
        file.open(QIODevice::ReadWrite | QIODevice::Text);
         QString ans = "";
         ans.push_back('[');
         for(auto x : course)
         {
            ans.push_back('(');
            ans.push_back(x);
            ans.push_back(')');
            ans.push_back('|');
         }
         ans = ans.left(ans.size() - 1);
         ans.push_back(']');
         out << ans << "\n";
    }
}
