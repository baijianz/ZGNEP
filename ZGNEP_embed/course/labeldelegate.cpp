#include "labeldelegate.h"
#include "zgnepstandarditem.h"
#include "zgnep_course.h"
#include "zgnep_courseedit.h"
#include "zgnepstandedititem.h"
#include <QMessageBox>
extern zgnep_courseEdit *zgnepCourseEditModel;
extern QTableView *zgnep_courseTableViewModel;
extern QTableView *ZGENPCourseEditTableModel;

labelDelegate::labelDelegate()
{

}

void labelDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    zgnepStandEditItem *standItem = static_cast<zgnepStandEditItem*>(index.internalPointer());
    standItem->stateChange();
    QMessageBox::information(nullptr, "*", "nihao");
}
//创建的模型
QWidget *labelDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QStyledItemDelegate::createEditor(parent, option, index);
}
