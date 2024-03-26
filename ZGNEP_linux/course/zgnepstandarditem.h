#ifndef ZGNEPSTANDARDITEM_H
#define ZGNEPSTANDARDITEM_H
#include <QStandardItem>
#include <QMouseEvent>
#include <QWidget>
class zgnepStandardItem : public QStandardItem, public QWidget
{
public:
    zgnepStandardItem(const QString &text, QString courseID, QString row, QString col);

    QString courseID;
    QString weekDay;
    QString Time;
    void openDetail();
};

#endif // ZGNEPSTANDARDITEM_H
