#include "zgnep_whiteboard.h"
#include "ui_zgnep_whiteboard.h"
#include <QDebug>
#include <QPainter>   //绘图
#include <QPixmap>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QColorDialog>
#include <QPushButton>
#include <QBrush>
#include <QImage>
#include <QDir>
#include <QTime>
#include <QDate>
#include <QPointF>
#include <QScreen>
#include <QMessageBox>
#include "./device/led/zgnep_peripheral_led.h"
#include "./messageBox/zgnep_msg.h"
#include "./messageBox/zgnep_messagebox_input.h"
#include "zgnep_main.h"
#include "./cover/zgnep_covershow.h"
#include "./account/zgnep_account_general.h"
extern QString loginedAccountID;

QString Controls;  //操作
QString path = QDir::currentPath();  //获取当前路径

zgnep_whiteBoard::zgnep_whiteBoard(QWidget *parent, QObject *initiate) :
    QWidget(parent),ui(new Ui::zgnep_whiteBoard),
    initiate(initiate)
{
    ui->setupUi(this);
    path += "/data/" + zgnep_account_general::readAccountRole(loginedAccountID) + "/pic/";
    //this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint); //| Qt::WindowStaysOnTopHint)
    this->raise();
    setWindowState(this->windowState() ^ Qt::WindowFullScreen);
    QList <QScreen *> list_screen =  QGuiApplication::screens();
    ui->label_erasePic->setVisible(false);
#if __arm__
    /* 重设大小 */
    this->resize(list_screen.at(0)->geometry().width(),
                 list_screen.at(0)->geometry().height());
#endif
    this->setWindowTitle("白板");
    ui->btn_Exit->setShortcut(Qt::Key_Escape);   //设置快捷键，按Esc键返回

    //画布init
    pix = new QPixmap(list_screen.at(0)->geometry().width(), list_screen.at(0)->geometry().width());   //画布大小
    pix->fill(Qt::white);                                     //画布填充白色
    pix2 = new QPixmap(list_screen.at(0)->geometry().width(), list_screen.at(0)->geometry().width());
    pix2->fill(Qt::white);

    //画笔init
    pen = new QPen();
    pen->setCapStyle(Qt::PenCapStyle::RoundCap);   //圆角
    pen->setWidth(2);                              //粗细
    pen->setStyle(Qt::PenStyle::SolidLine);

    emit on_btn_Pen_clicked();
}

zgnep_whiteBoard::~zgnep_whiteBoard()
{
    delete ui;
}

void zgnep_whiteBoard::on_btn_Exit_clicked()
{
    //返回到主界面
    if(zgnep_msg::zgnep_MsgBox("确定退出？", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, this))
    {
        //auto p = qobject_cast<ZGNEP_Main*>(initiate);
        this->close();
        //p->show();
    }

}

void zgnep_whiteBoard::on_btn_Save_clicked()
{
    QString fileName = zgnep_messageBox_input::zgnep_MsgBox_input("文件名称：" ,path, MSG_INPUT_TYPE::SA_JUDGEFILE, this);
    ui->label_erasePic->setText(path);
    QString SavePath = path + fileName + ".png";
    if(fileName.size() > 0)
    {
        try {
            QString SavePath = path + fileName + ".png";
            ui->label_erasePic->setText(SavePath);
            pix->save(SavePath, "PNG");
            zgnep_msg::zgnep_MsgBox("已保存（2s自动关闭）", MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_TIPS, this);
        } catch (...) {
            ui->label_erasePic->setText("on_btn_Save_clicked error");
        }

    }

}

void zgnep_whiteBoard::on_btn_delete_clicked()
{
    if(zgnep_msg::zgnep_MsgBox("确认删除该页？", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, this))
    {
        pix->fill(Qt::white);
        update();
    }
    else
    {

    }
}

void zgnep_whiteBoard::paintEvent(QPaintEvent *ev)
{
    ev->ignore();
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,30,*pix); //将pix放在界面上;
    painter.end();

}

void zgnep_whiteBoard::mousePressEvent(QMouseEvent *ev)
{
        *pix2 = pix->copy();  //在点击前
        point = ev->pos();
}

void zgnep_whiteBoard::mouseReleaseEvent(QMouseEvent *ev)
{
    if(pen_shape == -1)
    {
        QPainter painter;
        painter.begin(pix);
        painter.setPen(QPen(Qt::white, 20));
        painter.setBrush(Qt::white);
        painter.drawEllipse(ev->x() - eraseSize[ui->cBox_eraeSize->currentIndex()] / 2, ev->y() - eraseSize[ui->cBox_eraeSize->currentIndex()] / 2 - 20, eraseSize[ui->cBox_eraeSize->currentIndex()], eraseSize[ui->cBox_eraeSize->currentIndex()]);
        update();
    }
}

void zgnep_whiteBoard::mouseMoveEvent(QMouseEvent *ev)
{
        QPainter painter;
        if(pen_shape == -1 || pen_shape == 1 || pen_shape == 2 || pen_shape == 3)
            *pix = pix2->copy();
        painter.begin(pix);
        painter.setPen(*pen);
        if(ev->pos().y()<30)
            return;
        switch (pen_shape) {
        case -1 :
        {
            painter.setBrush(pen->color());
            painter.drawEllipse(ev->x() - eraseSize[ui->cBox_eraeSize->currentIndex()] / 2, ev->y() - eraseSize[ui->cBox_eraeSize->currentIndex()] / 2 - 20, eraseSize[ui->cBox_eraeSize->currentIndex()], eraseSize[ui->cBox_eraeSize->currentIndex()]);
            QPainter painter2;
            painter2.begin(pix2);
            painter2.setPen(Qt::white);
            painter2.setBrush(Qt::white);
            painter2.drawEllipse(ev->x() - eraseSize[ui->cBox_eraeSize->currentIndex()] / 2, ev->y() - eraseSize[ui->cBox_eraeSize->currentIndex()] / 2 - 20, eraseSize[ui->cBox_eraeSize->currentIndex()], eraseSize[ui->cBox_eraeSize->currentIndex()]);
            painter2.end();
            update();
        }
            break;
        case 0:
            painter.drawLine(point.x(),point.y()-30,ev->x(),ev->y()-30);  //画线
            point = ev->pos();
            break;
        case 1:
            painter.drawLine(point.x(),point.y()-30,ev->x(),ev->y()-30);  //直线
            break;
        case 2:
            painter.drawRect(point.x(),point.y()-30,ev->x()-point.x(),ev->y()-point.y());  //矩形
            break;
        case 3:
            painter.drawEllipse(point.x(),point.y()-30,ev->x()-point.x(),ev->y()-point.y());  //椭圆
            break;
        }
        painter.end();
        update();
}

void zgnep_whiteBoard::on_btn_Pen_clicked()   //手写
{
    ui->label_model->setText("随心写");
    pen_shape = 0;
    pen->setStyle(Qt::PenStyle::SolidLine);
    checkErasePic();
}

void zgnep_whiteBoard::on_btn_eraser_clicked()
{
    ui->label_model->setText("橡皮擦");
    pen_shape = -1;
    pen->setWidth(20);
    //pen->setColor(Qt::white);
    checkErasePic();
}

void zgnep_whiteBoard::on_btn_Color_clicked()
{
    pen->setBrush(QBrush(QColorDialog::getColor()));
}

void zgnep_whiteBoard::on_cBox_size_currentIndexChanged(const QString &arg1)
{
    pen->setWidth(arg1.toInt());
}

void zgnep_whiteBoard::on_cBox_size_2_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "实线")
        pen->setStyle(Qt::PenStyle::SolidLine);
    if(arg1 == "虚线")
        pen->setStyle(Qt::PenStyle::DashLine);
    if(arg1 == "点")
        pen->setStyle(Qt::PenStyle::DotLine);
    if(arg1 == "点线")
        pen->setStyle(Qt::PenStyle::DashDotLine);
    if(arg1 == "点点线")
        pen->setStyle(Qt::PenStyle::DashDotDotLine);
}

void zgnep_whiteBoard::on_btn_StraightLine_clicked()
{
    emit on_btn_Pen_clicked();
    ui->label_model->setText("画直线");
    pen_shape = 1;
    checkErasePic();
}

void zgnep_whiteBoard::on_btn_rectangle_clicked()
{
    emit on_btn_Pen_clicked();
    ui->label_model->setText("画矩形");
    pen_shape = 2;
    checkErasePic();
}

void zgnep_whiteBoard::on_btn_round_clicked()
{
    ui->label_model->setText("画圆形");
    pen_shape = 3;
    checkErasePic();
}

void zgnep_whiteBoard:: checkErasePic()
{

}
