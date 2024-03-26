#include "treeview.h"

#include <QtDebug>
#include <QFocusEvent>


TreeView::TreeView()
{

}
/*
 * 在 focusInEvent 函数中，
 * 首先调用父类的 focusInEvent 函数以便处理基本的焦点事件。
 * 然后根据焦点变化的原因，通过 event->reason() 获取焦点变化的原因。
 * 根据不同的原因，执行不同的操作。如果焦点原因是鼠标点击、Tab 键、窗口活动等，则发出 treeViewGotFocus 信号。
 */
void TreeView::focusInEvent(QFocusEvent *event)
{
    QAbstractItemView::focusInEvent(event);

    Qt::FocusReason reason = event->reason();
    switch (reason) {
    case Qt::MouseFocusReason:  //鼠标
    case Qt::TabFocusReason:     //tab
    case Qt::BacktabFocusReason:
    case Qt::ActiveWindowFocusReason: //窗口活动
        emit treeViewGotFocus();
        break;
    case Qt::OtherFocusReason:
    case Qt::PopupFocusReason:
    case Qt::ShortcutFocusReason:
    case Qt::MenuBarFocusReason:
    default:
        break;
    }
}
/*
 * 当控件失去焦点时，会执行 focusOutEvent 函数。
 */
void TreeView::focusOutEvent(QFocusEvent *event)
{
    QAbstractItemView::focusOutEvent(event);
}
