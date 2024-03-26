#ifndef EVENTFILTER_H
#define EVENTFILTER_H

#include <QObject>
#include <QMouseEvent>
class EventFilter : public QObject
{
    Q_OBJECT
public:
    explicit EventFilter(QObject *parent = nullptr);

protected:
     bool eventFilter(QObject *obj, QEvent *event) override;
signals:

};

#endif // EVENTFILTER_H
