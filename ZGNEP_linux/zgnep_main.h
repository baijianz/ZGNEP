#ifndef ZGNEP_MAIN_H
#define ZGNEP_MAIN_H

#include <QMainWindow>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class ZGNEP_Main;}
QT_END_NAMESPACE

class ZGNEP_Main : public QMainWindow
{
    Q_OBJECT

public:
    ZGNEP_Main(QWidget *parent = nullptr, QString loginAccountID = "");
    ~ZGNEP_Main();
    QTimer dateTimeTime;
    void  lcd_refresh();
    int  checkCurrentTimeValid();  //判断当前时间是否属于上课时间内,返回第几节
    bool  checkCurrentTimeHasCourse(); //判断当前时间是否有课

    void refreshImage();


private slots:
    void on_pushButton_clicked();

    void on_ZGNEP_main_pushBtn_setting_clicked();

    void on_ZGNEP_main_pushBtn_whiteBoard_clicked();

    void on_ZGNEP_main_pushBtn_demonstrate_clicked();

    void on_ZGNEP_main_pushBtn_file_clicked();

    void on_ZGNEP_main_pushBtn_transport_clicked();

    void on_zgnep_main_photo_clicked();

    void on_zgenp_main_text_clicked();

    void on_zgnep_main_ppt_clicked();

    void on_zgnep_main_word_clicked();

    void on_ZGNEP_main_pushBtn_video_clicked();

    void on_ZGNEP_main_pushBtn_audio_clicked();

    void on_zgenp_main_calc_clicked();

    void on_zgnep_main_course_clicked();

    void on_zgnep_main_calender_clicked();

private:
    Ui::ZGNEP_Main *ui;
};
#endif // ZGNEP_MAIN_H
