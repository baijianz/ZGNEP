#include "imagedelegate.h"
#include <QtWidgets>
#include "./photo/zgnep_photoviewer.h"
#include "./photo/zgnep_photoviewer_embed.h"
ImageDelegate::ImageDelegate(QObject *parent):QStyledItemDelegate(parent)
{

}

QWidget *ImageDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return  QStyledItemDelegate::createEditor(parent, option, index);
}

//双击某一项就会进到这个函数
void ImageDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    zgnep_photoViewer_Embed *mode = new zgnep_photoViewer_Embed(nullptr, index.data().value<QString>());
    mode->show();

}

//完成编辑的时候会进到这个函数
void ImageDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{

}

//设置为一个合适的大小
void ImageDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}

void ImageDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QStyleOptionViewItem opt = option;
    initStyleOption(&opt, index);

    // 绘制图片
    if (index.data().isValid()) {
        QRect rect = option.rect.adjusted(5, 5, -5, -5);
        QPixmap pixmap = QPixmap(index.data().value<QString>());
        painter->drawPixmap(rect, pixmap);
    }
}
