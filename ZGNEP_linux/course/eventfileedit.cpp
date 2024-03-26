#include "eventfileedit.h"
#include <QMouseEvent>
#include <QTableView>
#include "zgnepstandarditem.h"
#include "zgnep_course.h"
#include "zgnep_courseedit.h"
#include "zgnepstandedititem.h"
#include <QMessageBox>
extern zgnep_courseEdit *zgnepCourseEditModel;
extern QTableView *zgnep_courseTableViewModel;
extern QTableView *ZGENPCourseEditTableModel;

eventFileEdit::eventFileEdit(QObject *parent) : QObject(parent)
{

}

bool eventFileEdit::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        if (mouseEvent->button() == Qt::LeftButton) {
            QModelIndex index = ZGENPCourseEditTableModel->indexAt(mouseEvent->pos());
             if (index.isValid()) {
                    //QMessageBox::information(nullptr, "信息", "这是一条信息消息框示例！");
                    // 在这里获取 standItem 的指针，并进行相应的操作
                    QStandardItemModel *model = qobject_cast<QStandardItemModel *>(ZGENPCourseEditTableModel->model());
                    zgnepStandEditItem *standItem = dynamic_cast<zgnepStandEditItem *>(model->itemFromIndex(index));
                    standItem->stateChange();
                    return true; // 阻止事件继续传递
            }

        }
    }
}
