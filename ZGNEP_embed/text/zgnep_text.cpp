#include "zgnep_text.h"
#include "./device/led/zgnep_peripheral_led.h"
#include "./messageBox/zgnep_msg.h"
#include "./whiteBoard/zgnep_whiteboard.h"
#include "./pdf/include/qpdfium.h"
#include "./cover/zgnep_covershow.h"
#include "./fileSystem/zgnep_filesystem.h"
#include "./multiMedia/zgnep_multiMedia_audio/zgnep_multimedia_audio.h"
#include "./multiMedia/zgnep_multiMedia_video/zgnep_multimedia_video.h"
#include "./photo/zgnep_photoviewer.h"
#include "./photo/zgnep_photoreposity.h"
#include "./text/zgnep_text.h"
#include "QGuiApplication"
#include <QApplication>
#include "zgnep_init.h"
extern QApplication *app;
zgnep_text::zgnep_text(QWidget *parent, QString path)
    : QMainWindow(parent)
{


//    this->setWindowFlags(this->windowFlags() | Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
//    this->setMinimumHeight(500);
//    this->setMinimumWidth(800);
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    this->setWindowTitle("zgnep_text 文本查看器");
    this->setWindowIcon(QIcon(":/logo.png"));


    le = new QTextEdit(this);
    le->setFocus();
    le->setMinimumWidth(800);
    le->move(0, 20);
    le->setMinimumHeight(500);
    le->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    this->setCentralWidget(le);
    menu_1 = new QMenu(tr("文件"));
    menu_2 = new QMenu(tr("编辑"));


    menuBar()->addMenu(menu_1);
    menuBar()->addMenu(menu_2);


    action_1 = new QAction(tr("新建"));
    action_2 = new QAction(tr("打开"));
    action_3 = new QAction(tr("退出"));
    action_4 = new QAction(tr("保存"));
    action_5 = new QAction(tr("字体"));
    action_6 = new QAction(tr("颜色"));


    action_1->setShortcut(tr("ctrl+n"));
    action_2->setShortcut(tr("ctrl+o"));
    action_3->setShortcut(tr("ctrl+q"));
    action_4->setShortcut(tr("ctrl+s"));
    action_5->setShortcut(tr("ctrl+w"));
    action_6->setShortcut(tr("ctrl+h"));

    menu_1->addAction(action_1);
    menu_1->addAction(action_2);
    menu_1->addAction(action_4);
    menu_1->addAction(action_3);
    menu_2->addAction(action_5);
    menu_2->addAction(action_6);


    QObject::connect(action_1,&QAction::triggered,this,&zgnep_text::fun1);
    QObject::connect(action_2,&QAction::triggered,this,&zgnep_text::fun2);
    QObject::connect(action_3,&QAction::triggered,this,&zgnep_text::fun3);
    QObject::connect(action_4,&QAction::triggered,this,&zgnep_text::fun4);
    QObject::connect(action_5,&QAction::triggered,this,&zgnep_text::fun5);
    QObject::connect(action_6,&QAction::triggered,this,&zgnep_text::fun6);


    status = new QStatusBar(this);
    this->setStatusBar(status);
    pWelCome = new QLabel(tr(""));
    pWelCome->setFrameShadow(QFrame::Sunken);
    status->setMinimumSize(200,20);
    status->addWidget(pWelCome);

    plab = new QLabel;
    timer = new QTimer;
    connect(timer,&QTimer::timeout,this,&zgnep_text::showTime); // 信号连接 每一秒执行一次槽函数
    timer->start(1000);

    if(path.size()){openFile(path),this->raise();}
    savePath = path;
}


zgnep_text::~zgnep_text()
{
    delete this;
}
void zgnep_text::showTime()
{
    QString string;
    QDateTime Timedata = QDateTime::currentDateTime();   //  获取当前时间
    string = Timedata.toString("yyyy-MM-dd hh:mm:ss");   //  设置显示格式
    plab->setText(string);
    statusBar()->addWidget(plab);  // 添加至状态栏
}

void zgnep_text::fun1(bool)
{
    QMessageBox::information(this,"新建",action_1->text(),QMessageBox::Yes );
    savePath = "";
    le->clear();

}

void zgnep_text::fun2(bool)
{
    QString path = QFileDialog::getOpenFileName(this,"open","./","*.txt;;*.cpp;;*.h");
    savePath = path;
    openFile(path);
}

void zgnep_text::openFile(QString path)
{
    QFile file(path);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream stream(&file);
    if(!path.isEmpty())
    {
        QString str;
        while(!stream.atEnd())
        {
           str+=stream.readLine();
           str+="\n";
        }
        le->setText(str);
       file.close();
    }
}
void zgnep_text::fun3(bool)
{
    if(zgnep_msg::zgnep_MsgBox("确认退出?", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, this))
       {
            if(this->parent()){
                auto *mode = static_cast<QWidget *>(this->parent());
                mode->show();

            }
            this->close();
       }
       else
       {

       }
}

void zgnep_text::fun4(bool)
{
    try {
        QString path;
        if(savePath.size())  //说明是打开已经现存的文件，所以不用getOpenFileName
        {
           path = savePath;
        }
        else
        {
            path = QFileDialog::getSaveFileName(this, "保存文件", "./", "文本文件 (*.txt);;所有文件 (*)");
        }
        QString fileName;

        QFile f(path);

        if(!f.open(QFile::WriteOnly|QFile::Truncate))
        {//追加写入 添加结束符\r\n
            //QMessageBox::warning(this,tr("错误"),tr("打开文件失败,数据保存失败"));
            zgnep_msg::zgnep_MsgBox("数据保存失败", MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_FAILED, this);
            return ;
        }
        else
        {
            QString content =le->toPlainText();
            QByteArray cdata = content.toLocal8Bit();
            std::string str = std::string(cdata);
            const char *text = str.c_str();
            f.write(text);
            zgnep_msg::zgnep_MsgBox("数据保存成功", MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_SUCCESS, this);
        }
        f.close();

    } catch (...) {
            zgnep_msg::zgnep_MsgBox("出现了未知错误", MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_FAILED, this);
    }
}

void zgnep_text::fun5(bool)
{
    bool ok;
    //获取lineedit的字体
    QFont ft = le->font();
    QFont temp = QFontDialog::getFont(&ok,ft,this,tr("字体"));
    if(ok)
    {
        le->setFont(temp);
    }
}


void zgnep_text::fun6(bool)
{
    QColor cl(255,255,255);
    cl = QColorDialog::getColor(cl/*Qt::white*/,this,tr("color"));
    if(cl.isValid())
    {
        le->setTextColor(cl);
        qDebug()<< "设置了颜色";
    }
}
