#include "comboxdelegate.h"
#include <QtWidgets>
#include "./account/zgnep_account_general.h"
#include "./course/zgnep_course_item.h"
#include <QMessageBox>
comboxDelegate::comboxDelegate(QObject *parent, QStringList list, int flag):QStyledItemDelegate(parent)
{
    this->flag = flag;
    this->list = list;
}

QWidget *comboxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QComboBox *mode = new QComboBox(parent);
    mode->addItems(list);
    mode->setCurrentText(index.data().value<QString>());
    return  mode;

}
//双击时触发
void comboxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QComboBox *model = dynamic_cast<QComboBox *>(editor);
    QString val = index.model()->data(index, Qt::EditRole).toString();
    model->setCurrentText(val);
}
//完成编辑后触发
void comboxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{

    QComboBox *combox = dynamic_cast<QComboBox*>(editor);
    QString str = combox->currentText();
    model->setData(index, str);
    if(flag == 0){
        if(str == "有" || str == "无") zgnep_account_general::setAccountAnthority(index.siblingAtColumn(1).data().value<QString>(), str == "有" ? "1" : "0");
        else if(list.contains("English")) zgnep_account_general::setAccountRole(index.siblingAtColumn(1).data().value<QString>(), str);
    }else if(flag == 1)
    {
        QString TeacherID = zgnep_account_general::readAccountIDByName(str);
        //QMessageBox::information(nullptr, "*", TeacherID);
        zgnep_course_item::SetCourseTeacher(index.siblingAtColumn(1).data().value<QString>(), TeacherID);
        //QMessageBox::information(nullptr, "*", index.siblingAtColumn(1).data().value<QString>());
    }
}
//自适应大小
void comboxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}

void comboxDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QStyledItemDelegate::paint(painter, option, index);
}
