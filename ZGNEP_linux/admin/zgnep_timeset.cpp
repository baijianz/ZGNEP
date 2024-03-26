#include "zgnep_timeset.h"
#include "ui_zgnep_timeset.h"
#include "./course/zgnep_course_time.h"
#include "./messageBox/zgnep_msg.h"
#include <QMessageBox>
extern zgnep_course_time *courseTimeMode;
zgnep_timeSet::zgnep_timeSet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zgnep_timeSet)
{
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    ui->setupUi(this);
    QStringList time;
    for(int i = 0; i < 10; i++)
    {
        QString temp = courseTimeMode->course[i];
        time.append(temp.split('-'));
    }
    ui->a1->setText(time[0]);
    ui->p1->setText(time[1]);

    ui->a2->setText(time[2]);
    ui->p2->setText(time[3]);

    ui->a3->setText(time[4]);
    ui->p3->setText(time[5]);

    ui->a4->setText(time[6]);
    ui->p4->setText(time[7]);

    ui->a5->setText(time[8]);
    ui->p5->setText(time[9]);

    ui->a6->setText(time[10]);
    ui->p6->setText(time[11]);

    ui->a7->setText(time[12]);
    ui->p7->setText(time[13]);

    ui->a8->setText(time[14]);
    ui->p8->setText(time[15]);

    ui->a9->setText(time[16]);
    ui->p9->setText(time[17]);

    ui->a10->setText(time[18]);
    ui->p10->setText(time[19]);
}

zgnep_timeSet::~zgnep_timeSet()
{
    delete ui;
}

bool zgnep_timeSet::checkConstrain()
{
    QStringList time;

    time.push_back(ui->a1->text().trimmed());
    time.push_back(ui->p1->text().trimmed());

    time.push_back(ui->a2->text().trimmed());
    time.push_back(ui->p2->text().trimmed());

    time.push_back(ui->a3->text().trimmed());
    time.push_back(ui->p3->text().trimmed());

    time.push_back(ui->a4->text().trimmed());
    time.push_back(ui->p4->text().trimmed());

    time.push_back(ui->a5->text().trimmed());
    time.push_back(ui->p5->text().trimmed());

    time.push_back(ui->a6->text().trimmed());
    time.push_back(ui->p6->text().trimmed());

    time.push_back(ui->a7->text().trimmed());
    time.push_back(ui->p7->text().trimmed());

    time.push_back(ui->a8->text().trimmed());
    time.push_back(ui->p8->text().trimmed());

    time.push_back(ui->a9->text().trimmed());
    time.push_back(ui->p9->text().trimmed());

    time.push_back(ui->a10->text().trimmed());
    time.push_back(ui->p10->text().trimmed());

    QVector<int> timeOfint;
    int pre = 0;
    for(auto x : time)
    {

        //QMessageBox::information(nullptr, QString::number(x.size()), x);
        if(x.size() != 5) return  false;
        if(x[0].unicode() > '2') return  false;
        if(x[0].unicode() == '2' && x[1].unicode() >= '4') return  false;

        if(x[3].unicode() >= '6') return false;
        int a = (x[0].unicode() - 48) * 1000 +  (x[1].unicode() - 48) * 100 + (x[3].unicode() - 48) * 10 + (x[4].unicode() - 48);
        if(a <= pre) return false;
        pre = a;

    }
    return  true;
}

void zgnep_timeSet::on_pushButton_clicked()
{
    this->close();
}

void zgnep_timeSet::on_pushButton_2_clicked()
{
    if(!checkConstrain())
    {
        zgnep_msg::zgnep_MsgBox("输入不满足规范或者时间重叠", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_FAILED, this);
        return;
    }
    courseTimeMode->course[0] = (ui->a1->text()) + '-' + (ui->p1->text());
    courseTimeMode->course[1] = (ui->a2->text()) + '-' + (ui->p2->text());
    courseTimeMode->course[2] = (ui->a3->text()) + '-' + (ui->p3->text());
    courseTimeMode->course[3] = (ui->a4->text()) + '-' + (ui->p4->text());
    courseTimeMode->course[4] = (ui->a5->text()) + '-' + (ui->p5->text());

    courseTimeMode->course[5] = (ui->a6->text()) + '-' + (ui->p6->text());
    courseTimeMode->course[6] = (ui->a7->text()) + '-' + (ui->p7->text());
    courseTimeMode->course[7] = (ui->a8->text()) + '-' + (ui->p8->text());
    courseTimeMode->course[8] = (ui->a9->text()) + '-' + (ui->p9->text());
    courseTimeMode->course[9] = (ui->a10->text()) + '-' + (ui->p10->text());

    zgnep_msg::zgnep_MsgBox("修改成功", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_SUCCESS, this);
    courseTimeMode->WriteInfo();
    this->close();
}
