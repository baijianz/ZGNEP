﻿#include "Loading.h"
#include "qmath.h"
#include <QDebug>
#include <QTimer>
#include <pthread.h>
#include <QThread>
Loading::Loading(QWidget *parent, QWidget *parentWidget) : QDialog(parent),_i(0),_interval(50),_index(0)
{

    this->setWindowFlags(this->windowFlags() | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    this->raise();
    this->setAttribute(Qt::WA_TranslucentBackground, true);    //设置背景透明
    setDotColor(QColor(49, 177, 190));
    setDotCount(12);
    connect(&timer,&QTimer::timeout,this,&Loading::refresh);
    setMaxDiameter(40);
    setMinDiameter(20);
    this->setMaximumSize(200, 200);
    if(parentWidget != nullptr)
    {
        QPoint parentCenter = parentWidget->geometry().center();

        // 计算子窗口应该出现的位置，使其在父窗口中央
        int x = parentCenter.x() - this->width() / 2;
        int y = parentCenter.y() - this->height() / 2;

        // 移动子窗口到计算出的位置
        this->move(x, y);
    }
}

void Loading::Loadingms(int ms)
{
    Loading *model = new Loading();
    model->show();
    model->start();
    QTimer *timer = new  QTimer();
    timer->setSingleShot(true); // 设置为一次性定时器
    timer->start(ms); // 设置定时器间隔为ms / 1000秒
    connect(timer, &QTimer::timeout, [=]()
    {
        if (model) {
            model->done(0);
            model->close();
            delete model; // 删除对象
        }
        delete timer; // 删除定时器对象
    });
}

//********************************************** 设置部分 *************************************
//设置点的个数
void Loading::setDotCount(int count)
{
    _count=count;
}

//设置点的颜色
void Loading::setDotColor(const QColor & color)
{
    _dotColor=color;
}

//开始动画
void Loading::start()
{
    timer.setInterval(_interval);
    timer.start();
}

//设置最大直径
void Loading::setMaxDiameter(float max)
{
    _maxDiameter=max;
}

//设置最小直径
void Loading::setMinDiameter(float min)
{
    _minDiameter=min;
}
//********************************************** 绘制部分 *************************************
//刷新界面
void Loading::refresh()
{
    repaint();
}

void Loading::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event)
    this->setWindowTitle("wojinlaile");
    caculate();
}

void Loading::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(_dotColor);
    painter.setBrush(_dotColor);

    //绘制点
    paintDot(painter);
}

//计算绘制正方形区域
void Loading::caculate()
{
    _squareWidth=qMin(this->width(),this->height());
    float half=_squareWidth/2;
    _centerDistance=half-_maxDiameter/2-1;

    float gap=(_maxDiameter-_minDiameter)/(_count-1)/2;
    float angleGap=(float)360/_count;

    locationList.clear();
    radiiList.clear();

    for(int i=0;i<_count;i++)
    {
        radiiList<<_maxDiameter/2-i*gap;
        float radian=qDegreesToRadians(-angleGap*i);
        locationList.append(Location(half+_centerDistance*qCos(radian),half-_centerDistance*qSin(radian)));
    }
}

//绘制圆点
void Loading::paintDot(QPainter& painter)
{
    for(int i=0;i<_count;i++)
    {
        painter.setPen(_dotColor);
        //半径
        float radii=radiiList.at((_index+_count-i)%_count);

        //绘制圆点
        painter.drawEllipse(QPointF(locationList.at(i).x,locationList.at(i).y),radii,radii);
        //绘制正方形
        //painter.drawRect(locationList.at(i).x,locationList.at(i).y,radii,radii);
        //绘制文字
        //QFont font("Microsoft YaHei",radii*1.2,75);
        //painter.setFont(font);
        //painter.drawText(QPointF(locationList.at(i).x,locationList.at(i).y),u8"霞");
    }
    _index++;
}
