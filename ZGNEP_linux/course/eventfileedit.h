#ifndef EVENTFILEEDIT_H
#define EVENTFILEEDIT_H

#include <QObject>

class eventFileEdit : public QObject
{
    Q_OBJECT
public:
    explicit eventFileEdit(QObject *parent = nullptr);

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

signals:

};

#endif // EVENTFILEEDIT_H
