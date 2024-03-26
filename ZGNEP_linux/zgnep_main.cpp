#include "zgnep_main.h"
#include "ui_zgnep_main.h"
#include <QDebug>
#include <QGuiApplication>
#include <QScreen>
#include <QRect>
#include <QDateTime>
#include "zgnep_pdfview.h"
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
#include "./ppt/zgnep_ppt.h"
#include "./word/zgnep_word.h"
#include "./calc/zgnep_calc.h"
#include "./setting/zgnep_setting.h"
#include "./account/zgnep_account_adminlogin.h"
#include "./account/zgnep_account_general.h"
#include "./account/zgnep_account_start.h"
#include "./account/zgnep_account_userlogin.h"
#include "./course/zgnep_course.h"
#include "./calendar/zgnep_calendar.h"
#include "./course/zgnep_course_time.h"
#include "./account/zgnep_account_general.h"
extern QString loginedAccountID;

ZGNEP_Main *StaticMainMode;
extern zgnep_course_time *courseTimeMode;

ZGNEP_Main::ZGNEP_Main(QWidget *parent, QString loginAccountID)
    : QMainWindow(parent)
    , ui(new Ui::ZGNEP_Main)
{
    ui->setupUi(this);
    StaticMainMode = this;
    /* 获取屏幕的分辨率，Qt官方建议使用这
     * 种方法获取屏幕分辨率，防上多屏设备导致对应不上
     * 注意，这是获取整个桌面系统的分辨率
     */
    QList <QScreen *> list_screen =  QGuiApplication::screens();
#if __arm__
    /* 重设大小 */
    this->resize(list_screen.at(0)->geometry().width(),
                 list_screen.at(0)->geometry().height());
#else
    /* 否则则设置主窗体大小为800x480 */
    this->resize(800, 480);
#endif
    setWindowState(this->windowState() ^ Qt::WindowFullScreen);

    ui->label_image->setPixmap(QPixmap("./account/profile/" + zgnep_account_general::readAccountImage(loginAccountID)));
    ui->label_image->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label_image->setScaledContents(true);
    ui->frame_3->setFrameStyle(QFrame::NoFrame);
    ui->frame_4->setFrameStyle(QFrame::NoFrame);
    ui->frame_5->setFrameStyle(QFrame::NoFrame);
    lcd_refresh();
    dateTimeTime.setInterval(1000);
    connect(&dateTimeTime, &QTimer::timeout, this, &ZGNEP_Main::lcd_refresh);
    dateTimeTime.start();
}

ZGNEP_Main::~ZGNEP_Main()
{
    delete ui;
}

void ZGNEP_Main::lcd_refresh()
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString DateTimeString = QString("%0年%1月%2日 %3时%4分%5秒")
                                .arg(dateTime.date().year())
                                .arg(dateTime.date().month())
                                .arg(dateTime.date().day())
                                .arg(dateTime.time().hour())
                                .arg(dateTime.time().minute())
                                .arg(dateTime.time().second());
    QStringList WeekDayList = {"星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期日"};
    DateTimeString += " " +WeekDayList.at((QDateTime::currentDateTime().date().dayOfWeek() + 6) % 7);
    ui->label_dateTime->setText(DateTimeString);
    dateTimeTime.start();
    if(checkCurrentTimeHasCourse())
    {
        ui->label_state->setText("当前状态： 上课");
        ui->label_state->setStyleSheet("background:#ADD8E6;color:#FFFFFF;border-radius:5px;");
    }
    else
    {
        ui->label_state->setText("当前状态： 休息");
        ui->label_state->setStyleSheet("background:#16A085;color:#FFFFFF;border-radius:5px;");
    }
}

bool ZGNEP_Main::checkCurrentTimeHasCourse()
{
    int a = checkCurrentTimeValid();
    if(a < 0) return false;
    //星期日在西方是第一天所以要进行处理
    //     (1 + 6) % 7
    return zgnep_course::checkTimeCourse((QDateTime::currentDateTime().date().dayOfWeek() + 6) % 7, a);
}

void ZGNEP_Main::refreshImage()
{
    ui->label_image->setPixmap(QPixmap("./account/profile/" + zgnep_account_general::readAccountImage(loginedAccountID)));
    ui->label_image->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label_image->setScaledContents(true);
}

int ZGNEP_Main::checkCurrentTimeValid()
{
    //判断当前时间是否属于上课时间内
    //courseTimeMode->course[10] 这个里面装了10节课的时间 格式为hh:mm-hh:mm (24小时制)
    int currentStr = QDateTime::currentDateTime().time().hour() * 100 + QDateTime::currentDateTime().time().minute();
    int index = 0;
    for(QString x : courseTimeMode->course)
    {
        QStringList list = x.split('-'); //hh:mm
        int minVal = list.front().left(2).toInt() * 100 + list.front().right(2).toInt();
        int maxVal = list.back().left(2).toInt() * 100 + list.back().right(2).toInt();
        if(minVal <= currentStr && maxVal >= currentStr) return index;
        index++;
    }
    return  -1;
}



void ZGNEP_Main::on_ZGNEP_main_pushBtn_setting_clicked()
{
    //zgnep_msg::zgnep_MsgBox("这是一个小小的测试", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_QUESTION, this);
    zgnep_coverShow *cover = new zgnep_coverShow(this, COVER_SETTING);
    cover->exec();
    zgnep_setting *mode = new zgnep_setting();
    mode->show();
}

void ZGNEP_Main::on_ZGNEP_main_pushBtn_whiteBoard_clicked()
{
    zgnep_coverShow *cover = new zgnep_coverShow(this, COVER_WHITEBOARD);
    cover->exec();
    zgnep_whiteBoard *mode = new zgnep_whiteBoard(nullptr, this);
    //this->hide();
    mode->show();
}
void ZGNEP_Main::on_pushButton_clicked()
{

}

void ZGNEP_Main::on_ZGNEP_main_pushBtn_demonstrate_clicked()
{
   zgnep_coverShow *cover = new zgnep_coverShow(this, COVER_PDF);
   cover->exec();
   zgnep_pdfView *mode = new zgnep_pdfView(this, "./data/default/pdf/", "草稿本.pdf"); //【正点原子】STM32MP1嵌入式Linux C应用编程指南V1.4.pdf
   //this->hide();
   mode->show();

}

void ZGNEP_Main::on_ZGNEP_main_pushBtn_file_clicked()
{
    zgnep_coverShow *cover = new zgnep_coverShow(this, QString(COVER_FILESYSTEM));
    cover->exec();
    zgnep_fileSystem *model = new  zgnep_fileSystem();
    model->show();
    //this->hide();
}

void ZGNEP_Main::on_ZGNEP_main_pushBtn_transport_clicked()
{

}

void ZGNEP_Main::on_zgnep_main_photo_clicked()
{
    zgnep_coverShow *cover = new zgnep_coverShow(this, QString(COVER_PHOTO));
    cover->exec();
    zgnep_photoReposity *model = new zgnep_photoReposity(nullptr, "./data/" + zgnep_account_general::readAccountRole(loginedAccountID) + "/pic/");

    model->show();

}

void ZGNEP_Main::on_zgenp_main_text_clicked()
{
    zgnep_coverShow *model = new zgnep_coverShow(this, QString(COVER_TEXT));
    model->exec();
    zgnep_text *mode = new zgnep_text();
    mode->show();
}

void ZGNEP_Main::on_zgnep_main_ppt_clicked()
{
    zgnep_coverShow *mode = new zgnep_coverShow(nullptr, COVER_PPT);
    mode->exec();
    zgnep_ppt *model = new zgnep_ppt(nullptr, "./data/default/ppt/demo.pptx", nullptr);
    model->show();
}

void ZGNEP_Main::on_zgnep_main_word_clicked()
{
    zgnep_coverShow *cover = new zgnep_coverShow(nullptr, COVER_WORD);
    cover->exec();
    zgnep_word *mode = new zgnep_word(nullptr, "./data/default/word/ZGNEP.docx", nullptr);
    mode->show();
}

void ZGNEP_Main::on_ZGNEP_main_pushBtn_video_clicked()
{
    zgnep_coverShow *model = new zgnep_coverShow(this, QString(COVER_VIDEO));
    model->exec();
    zgnep_multiMedia_video *mode = new zgnep_multiMedia_video(nullptr, "./data/" + zgnep_account_general::readAccountRole(loginedAccountID) + "/MyVideo/", "");
    mode->show();
}

void ZGNEP_Main::on_ZGNEP_main_pushBtn_audio_clicked()
{
    zgnep_coverShow *model = new zgnep_coverShow(this, QString(COVER_AUDIO));
    model->exec();
    zgnep_multiMedia_audio *mode = new zgnep_multiMedia_audio(nullptr, "./data/" + zgnep_account_general::readAccountRole(loginedAccountID) + "/MyAudio/", "");
    mode->show();
}
void ZGNEP_Main::on_zgenp_main_calc_clicked()
{
    zgnep_coverShow *model = new zgnep_coverShow(this, QString(COVER_CALC));
    model->exec();
    zgnep_calc *mode = new zgnep_calc();
    mode->show();
}

void ZGNEP_Main::on_zgnep_main_course_clicked()
{

    zgnep_coverShow *m = new zgnep_coverShow(this, QString(COVER_COURSETABLE));
    m->exec();
    zgnep_course *model = new zgnep_course();
    model->show();
}

void ZGNEP_Main::on_zgnep_main_calender_clicked()
{
    zgnep_coverShow *m = new zgnep_coverShow(this, QString(COVER_CALENDAR));
    m->exec();
    zgnep_calendar *model = new zgnep_calendar();
    model->show();
}
