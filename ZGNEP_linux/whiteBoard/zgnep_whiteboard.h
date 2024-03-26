#ifndef ZGNEP_WHITEBOARD_H
#define ZGNEP_WHITEBOARD_H

#include <QWidget>

namespace Ui {
class zgnep_whiteBoard;
}

class zgnep_whiteBoard : public QWidget
{
    Q_OBJECT

public:
    explicit zgnep_whiteBoard(QWidget *parent = nullptr, QObject *initiate = nullptr);
    ~zgnep_whiteBoard();

private slots:
    void on_btn_Exit_clicked();

    void on_btn_Save_clicked();

    void on_btn_delete_clicked();

    void on_btn_Pen_clicked();

    void on_btn_eraser_clicked();

    void on_btn_Color_clicked();

    void on_cBox_size_currentIndexChanged(const QString &arg1);

    void on_cBox_size_2_currentIndexChanged(const QString &arg1);

    void on_btn_StraightLine_clicked();

    void on_btn_rectangle_clicked();

    void on_btn_round_clicked();

protected:

    void paintEvent(QPaintEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

private:
    Ui::zgnep_whiteBoard *ui;
    QObject *initiate;

    int x=0,y=0;
    QPixmap *pix;    //画布
    QPixmap *pix2;   //画布2 为了画直线，矩形，椭圆

    QPen *pen;       //画笔
    QPoint point;
    QPointF tar[3];

    QVector<int> eraseSize{20, 50, 100};
    int pen_shape;   //画笔形状( -1 橡皮擦, 0 随意画, 1 直线, 2 矩形,
                     // 3 椭圆)
    void checkErasePic(void);

};

#endif // ZGNEP_WHITEBOARD_H

