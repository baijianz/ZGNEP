#include "zgnep_calendar.h"
#include "ui_zgnep_calendar.h"
#include "lunarcalendarwidget.h"
zgnep_calendar::zgnep_calendar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zgnep_calendar)
{
    ui->setupUi(this);
    QVBoxLayout *v = new QVBoxLayout();
    v->addWidget(new LunarCalendarWidget());
    ui->frame_2->setLayout(v);
    this->setWindowTitle("日历");
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
}

zgnep_calendar::~zgnep_calendar()
{
    delete ui;
}

void zgnep_calendar::on_pushButton_clicked()
{
    this->close();
}
