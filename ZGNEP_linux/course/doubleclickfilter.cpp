#include "doubleclickfilter.h"
#include <QMouseEvent>
#include<QStandardItem>
DoubleClickFilter::DoubleClickFilter(QObject *parent) : QObject(parent)
{

}

bool DoubleClickFilter::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        if (mouseEvent->button() == Qt::LeftButton) {
            // 处理双击事件
            QStandardItem *item = qobject_cast<QStandardItem*>(obj);
            if (item) {
                //
            }
            return true; // 事件已处理
        }
    }
    return QObject::eventFilter(obj, event);
}
