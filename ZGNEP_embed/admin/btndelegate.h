#ifndef BTNDELEGATE_H
#define BTNDELEGATE_H

#include <QObject>
#include <QWidget>
#include <QMouseEvent>
#include <QPushButton>
#include <QStyledItemDelegate>
class btnDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    btnDelegate(QObject *parent = nullptr, QString text = "", int flag = 0);
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;

    // 重写鼠标点击事件处理函数，捕获按钮点击事件
    bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override;

    QString Text;
    int flag;
private slots:
//    void on_btnclick1();
};

#endif // BTNDELEGATE_H
