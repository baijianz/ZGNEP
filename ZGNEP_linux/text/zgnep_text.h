#ifndef ZGNEP_TEXT_H
#define ZGNEP_TEXT_H


#include <QMenuBar>
#include <QMenu>
#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QIODevice>
#include <QColorDialog>
#include <QColor>
#include <QDebug>
#include <QFontDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QLineEdit>
#include <QStatusBar>
#include <QLabel>
#include <QToolBar>
#include <QKeySequence>
#include <QDateTime>
#include <QTextEdit>
#include <QTextStream>
#include <QGridLayout>
#include <QMenuBar>
#include <QIcon>
#include <QByteArray>
#include <QAction>
#include <QProcess>
#include <QHBoxLayout>
#include <QTimer>

class zgnep_text : public QMainWindow
{
    Q_OBJECT

public:
    zgnep_text(QWidget *parent = nullptr, QString path = "");
    ~zgnep_text();
    void tim();
private:
    void openFile(QString path);
    QTextEdit* le;
    QMenu* menu_1;
    QMenu* menu_2;
    QMenu* menu_3;
    QMenu* menu_4;
    QMenu* menu_5;

    QAction* action_1;
    QAction* action_2;
    QAction* action_3;
    QAction* action_4;
    QAction* action_5;
    QAction* action_6;
    QAction* action_7;
    QAction* action_8;
    QAction* action_9;

    QStatusBar* status;
    QLabel* pWelCome;
    QLabel* plab;
    QTimer * timer;
    QString savePath;
public slots:
    void fun1(bool);
    void fun2(bool);
    void fun3(bool);
    void fun4(bool);
    void fun5(bool);
    void fun6(bool);
    void showTime();
};


#endif // ZGNEP_TEXT_H
