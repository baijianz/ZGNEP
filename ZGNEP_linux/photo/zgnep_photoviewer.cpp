#include "zgnep_photoviewer.h"
#include <qdebug.h>

zgnep_photoViewer::zgnep_photoViewer(QWidget *parent, QString path)
{
    this->setFixedSize(800,500);

    this->maxLevel = 0;
    this->xLevel = 0;
    this->yLevel = 0;
    this->setWindowTitle("zgnep_photo图片查看器");
    this->setModal(true);
    this->picLabel = new QLabel(this);
    this->picLabel->resize(this->width(),this->height());
    this->picLabel->setPixmap(QPixmap(path));
    this->picLabel->setScaledContents(true);  //指定控件是否根据控件自身大小来缩放显示其内容
    this->picLabel->raise();
}
void zgnep_photoViewer::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    this->picLabel->resize(this->width()+200*this->maxLevel,(this->width()+200*this->maxLevel)/8*5);

}

void zgnep_photoViewer::mousePressEvent(QMouseEvent *event)
{
    this->mousePoint = event->pos();

}

void zgnep_photoViewer::mouseMoveEvent(QMouseEvent *event)
{
    //鼠标按下左键并移动
    if (event->buttons() == Qt::LeftButton)
    {
        if((this->picLabel->pos()+event->pos()-this->mousePoint).x()<0 &&
                (this->picLabel->pos()+event->pos()-this->mousePoint).y()<0 &&
                ((this->picLabel->pos()+event->pos()-this->mousePoint).x()+this->picLabel->width())>this->width() &&
                ((this->picLabel->pos()+event->pos()-this->mousePoint).y()+this->picLabel->height())>this->height())
        {
            this->picLabel->move(this->picLabel->pos()+event->pos()-this->mousePoint);
            this->mousePoint = event->pos();
        }
    }
}

void zgnep_photoViewer::wheelEvent(QWheelEvent *event)
{
    this->mousePoint = event->pos();


      //放大缩小时，鼠标位置的像素点不移动
//    this->xLevel = (double)(this->mousePoint.x()-this->picLabel->x())/(double)this->picLabel->width();
//    this->yLevel = (double)(this->mousePoint.y()-this->picLabel->y())/(double)(this->picLabel->width()/8*5);

    //放大缩小时，图片始终位于窗口内
    this->xLevel = (double)this->mousePoint.x()/(double)this->width();
    this->yLevel = (double)this->mousePoint.y()/(double)(this->width()/8*5);


    if(event->delta()>0)
    {

        if(this->maxLevel < 10)
        {
            this->maxLevel++;
            this->picLabel->move(this->mousePoint.x()-(this->width()+200*this->maxLevel)*this->xLevel,
                                   this->mousePoint.y()-(this->width()+200*this->maxLevel)/8*5*this->yLevel);
        }
    }
    else
    {
        if(this->maxLevel > 0)
        {
            this->maxLevel--;
            this->picLabel->move(this->mousePoint.x()-(this->width()+200*this->maxLevel)*this->xLevel,
                                   this->mousePoint.y()-(this->width()+200*this->maxLevel)/8*5*this->yLevel);
        }
    }
}
