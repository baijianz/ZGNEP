#ifndef ZGNEP_PHOTOSHOWDELEGATE_H
#define ZGNEP_PHOTOSHOWDELEGATE_H

#include <QStyledItemDelegate>

class zgnep_photoShowDelegate : public QStyledItemDelegate
{
public:
    zgnep_photoShowDelegate();

    void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override;
    QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override;

};

#endif // ZGNEP_PHOTOSHOWDELEGATE_H
