#include "zgnep_photoshowdelegate.h"
#include <QPainter>
zgnep_photoShowDelegate::zgnep_photoShowDelegate()
{

}
void zgnep_photoShowDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    // 绘制每行的内容，包括多张图片和图片名称
    if (index.isValid()) {

    }

}

QSize zgnep_photoShowDelegate::sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    // 返回每行的大小
     return QSize(1000, 100); // 设置每行的大小为 200x100
}
