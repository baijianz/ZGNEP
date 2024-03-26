#ifndef LABELDELEGATE_H
#define LABELDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
class labelDelegate : public QStyledItemDelegate
{
public:
    labelDelegate();
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    QWidget * createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
//    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
//    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // LABELDELEGATE_H
