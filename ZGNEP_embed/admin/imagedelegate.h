#ifndef IMAGEDELEGATE_H
#define IMAGEDELEGATE_H
#include <QStyledItemDelegate>
#include <QObject>
class ImageDelegate : public QStyledItemDelegate
{
    Q_OBJECT;
public:
    ImageDelegate(QObject *parent = nullptr);
    QWidget * createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // IMAGEDELEGATE_H
