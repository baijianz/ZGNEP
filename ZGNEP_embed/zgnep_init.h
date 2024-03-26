#ifndef ZGNEP_INIT_H
#define ZGNEP_INIT_H

#include <QObject>
#include <QSplashScreen>
#include <QProgressBar>

namespace Ui {
class zgnep_init;
}

class zgnep_init:public QSplashScreen
{
    Q_OBJECT
public:
    zgnep_init(QPixmap pixmap, QWidget *parent = 0);
    //设置进度区间
    void setRange(int min, int max);

public slots:
    //更新进度
    void updateProgress(int num);
    void showProgressMessage(int total, const QString& msg);

private:
    Ui::zgnep_init *ui;
    QProgressBar *bar; //进度条
};

#endif // ZGNEP_INIT_H
