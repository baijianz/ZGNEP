#ifndef ZGNEP_PHOTOREPOSITY_H
#define ZGNEP_PHOTOREPOSITY_H

#include <QWidget>
#include "./photo/zgnep_photoitem.h"
#include <QFileInfoList>
namespace Ui {
class zgnep_photoReposity;
}

class zgnep_photoReposity : public QWidget
{
    Q_OBJECT

public:
    explicit zgnep_photoReposity(QWidget *parent = nullptr);
    explicit zgnep_photoReposity(QWidget *parent = nullptr, QString path = "./data/default/pic/");
    ~zgnep_photoReposity();

private slots:
    void on_btn_Exit_clicked();

public slots:
    void on_photo_show(QString path);

private:
    Ui::zgnep_photoReposity *ui;
    QFileInfoList imagesList;
    QList<zgnep_photoItem *> photoList;
};

#endif // ZGNEP_PHOTOREPOSITY_H
