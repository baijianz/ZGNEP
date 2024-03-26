#ifndef ZGNEP_PHOTOVIEWER_H
#define ZGNEP_PHOTOVIEWER_H

#include <QLabel>
#include <QPoint>
#include <QWidget>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QDialog>
#include <QMainWindow>

class zgnep_photoViewer : public QDialog
{
    Q_OBJECT
public:
    explicit zgnep_photoViewer(QWidget *parent = 0, QString path = "./photo/data/demo.jpg");
    QLabel *picLabel;
    int maxLevel;
    double xLevel;
    double yLevel;
    QPoint mousePoint;
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
signals:

public slots:
};


#endif // ZGNEP_PHOTOVIEWER_H
