#ifndef DOUBLECLICKFILTER_H
#define DOUBLECLICKFILTER_H

#include <QObject>

class DoubleClickFilter : public QObject
{
    Q_OBJECT
public:
    explicit DoubleClickFilter(QObject *parent = nullptr);

protected:
     bool eventFilter(QObject *obj, QEvent *event) override;
signals:

};

#endif // DOUBLECLICKFILTER_H
