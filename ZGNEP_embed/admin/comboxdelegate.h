#ifndef COMBOXDELEGATE_H
#define COMBOXDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class comboxDelegate : public QStyledItemDelegate
{
    Q_OBJECT;
public:
    QStringList list;
    int flag;
    comboxDelegate(QObject *parent = nullptr, QStringList list = {}, int flag = 0);
    QWidget * createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // COMBOXDELEGATE_H
