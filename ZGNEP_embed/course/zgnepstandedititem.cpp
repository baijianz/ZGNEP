#include "zgnepstandedititem.h"
#include "zgnep_course.h"
#include "zgnep_course_item.h"
#include "zgnep_course_time.h"
#include "zgnepstandedititem.h"
#include <QMessageBox>
extern QMap<QString, int> COURSEMAP;
extern QMap<int, QBrush> colorMap;// 添加颜色到字典中
zgnepStandEditItem::zgnepStandEditItem(QString text, int flag, QString CourseID):QStandardItem(text)
{
    this->flag = flag;
    this->text = zgnep_course_item::readCourseName(CourseID);
    this->CourseID = CourseID;
}

void zgnepStandEditItem::stateChange()
{

    //QMessageBox::information(nullptr, " ", "我改变了状态");
    if(flag == -1) return;

    flag = (flag + 1) % 2;
    if(flag == 1)  //表示已经选上了
    {
        this->setText(text);
        this->setBackground(colorMap[COURSEMAP[zgnep_course_item::readCourseName(CourseID)]]);
    }
    else  //表示为空
    {
        this->setText("");
        this->setBackground(Qt::white);
    }
}
