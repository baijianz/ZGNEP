#ifndef ZGNEPSTANDEDITITEM_H
#define ZGNEPSTANDEDITITEM_H

#include <QObject>
#include <QStandardItem>
class zgnepStandEditItem : public QStandardItem
{
    //Q_OBJECT
public:
    zgnepStandEditItem(QString text, int flag, QString CourseID);
    void stateChange();
    int flag = 0;
    QString text;
    QString CourseID;
};

#endif // ZGNEPSTANDEDITITEM_H
