#include "zgnep_rotatinglabel.h"
#include <QEvent>
#include <QPainter>
#include <QTimer>
#include <QTransform>
zgnep_rotatingLabel::zgnep_rotatingLabel(QWidget *parent) : QLabel(parent)
{

    angle = 0;
    rotating = false;
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &zgnep_rotatingLabel::updateRotation);
    timer->setInterval(2000); // 每1秒更新一次旋转角度
    timer->start();
}

void zgnep_rotatingLabel ::setRotating(bool enabled)
{
    rotating = enabled;
    update(); // 重新绘制 label
}

void zgnep_rotatingLabel::updateRotation()
{
        if (rotating)
        {
            angle = (angle + 1) % 360; // 旋转角度增加
            QPixmap rotatedPixmap = this->pixmap()->transformed(QTransform().rotate(angle));
            this->setPixmap(rotatedPixmap);
        }

}
void zgnep_rotatingLabel::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event);

//    if (rotating && flag) {

//        QImage rotatedImage = rotatedPixmap.toImage(); // 将 QPixmap 转换为 QImage
//        QMatrix matrix;
//        matrix.rotate(angle); // 创建一个矩阵进行旋转

//        QImage transformedImage = rotatedImage.transformed(matrix, Qt::FastTransformation); // 使用矩阵进行快速变换，即2D旋转

//        QPixmap transformedPixmap = QPixmap::fromImage(transformedImage); // 将旋转后的 QImage 转换回 QPixmap

//        QPainter painter(this);
//        painter.drawPixmap(this->rect(), transformedPixmap); // 使用旋转后的 QPixmap 进行绘制

//    }
}
