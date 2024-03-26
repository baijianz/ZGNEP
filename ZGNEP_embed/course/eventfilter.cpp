#include "eventfilter.h"
#include <QTableView>
#include <QMessageBox>
#include "zgnepstandarditem.h"
#include "zgnep_course.h"
#include "zgnep_courseedit.h"
#include "zgnepstandedititem.h"
extern zgnep_courseEdit *zgnepCourseEditModel;
extern QTableView *zgnep_courseTableViewModel;
extern QTableView *ZGENPCourseEditTableModel;
EventFilter::EventFilter(QObject *parent) : QObject(parent)
{

}

//QMessageBox::information(nullptr, "信息", "这是一条信息消息框示例！");

bool EventFilter::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        //QMessageBox::information(nullptr, "信息", "这是一条信息消息框示例！");
        if (obj == zgnep_courseTableViewModel->viewport()) {
            if (event->type() == QEvent::MouseButtonDblClick) {
                QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
                QModelIndex index = zgnep_courseTableViewModel->indexAt(mouseEvent->pos());
                if (index.isValid()) {
                    QStandardItemModel *model = qobject_cast<QStandardItemModel *>(zgnep_courseTableViewModel->model());
                    zgnepStandardItem *item = dynamic_cast<zgnepStandardItem *>(model->itemFromIndex(index));
                    if (item && item->text().size() > 0) {
                            item->openDetail();
                    }
                }
                return true; // 表示事件已经被处理了
            }
        }
//        else if(obj == ZGENPCourseEditTableModel->viewport())
//        {
//            //QMessageBox::information(zgnepCourseEditModel, "", "我进来le");
//            if (event->type() == QEvent::MouseButtonDblClick) {
//                QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
//                //QMessageBox::information(zgnepCourseEditModel, "", "我进来了2");
//                QModelIndex index = ZGENPCourseEditTableModel->indexAt(mouseEvent->pos());
////               if(index.isValid())
////               {
////                    QStandardItemModel *model =  qobject_cast<QStandardItemModel *>(zgnep_courseTableViewModel->model());
////                   zgnepStandEditItem *item = dynamic_cast<zgnepStandEditItem *>(model->itemFromIndex(index));
////                    item->stateChange();
////                }
//            }
//        }
        return false; // 表示事件未被处理

    }
    return QObject::eventFilter(obj, event);
}
