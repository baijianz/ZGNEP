#ifndef ZGNEP_PHOTOITEM_H
#define ZGNEP_PHOTOITEM_H

#include <QWidget>
#include <QFileInfo>
#include <QFile>
namespace Ui {
class zgnep_photoItem;
}

class zgnep_photoItem : public QWidget
{
    Q_OBJECT

public:
    explicit zgnep_photoItem(QWidget *parent = nullptr);  //explicit 不能隐式
    explicit zgnep_photoItem(QWidget *parent = nullptr, QString path = "");
    ~zgnep_photoItem();
protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    Ui::zgnep_photoItem *ui;
    QString ImagePath;
};

#endif // ZGNEP_PHOTOITEM_H
