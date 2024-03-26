#include "zgnep_setting_datetime.h"
#include "ui_zgnep_setting_datetime.h"
#include <QDateTime>
#include <QProcess>
zgnep_setting_datetime::zgnep_setting_datetime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zgnep_setting_datetime)
{
    ui->setupUi(this);
    setWindowTitle("zgnep_setting_datetime");
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString s = currentDateTime.toString("yyyy,MM,dd,hh,mm,ss");
    QStringList list = s.split(',');
    ui->sbYear->setMaximum(INT_MAX);
    ui->sbYear->setValue(list[0].toInt());
    ui->sbMonth->setRange(1, 12);
    ui->sbMonth->setValue(list[1].toInt());
    ui->sbDay->setRange(1, 31);
    ui->sbDay->setValue(list[2].toInt());
    ui->sbHour->setRange(0, 24);
    ui->sbHour->setValue(list[3].toInt());
    ui->sbMinute->setRange(0, 59);
    ui->sbMinute->setValue(list[4].toInt());
    ui->sbSecond->setRange(0, 59);
    ui->sbSecond->setValue(list[5].toInt());
}

zgnep_setting_datetime::~zgnep_setting_datetime()
{
    delete ui;
}

void zgnep_setting_datetime::on_btn_cancel_clicked()
{
    done(0);
    this->close();
}

void zgnep_setting_datetime::on_btn_confirm_clicked()
{
    int year = ui->sbYear->value();
    int month = ui->sbMonth->value();
    int day = ui->sbDay->value();
    QVector<int> BigMonth{1, 3, 5, 7, 8, 10, 12};
    auto check = [&](void) -> bool
    {
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
                if(month == 2)
                 {
                   if( day <= 29) return  true;
                    return false;
                 }
                else if(BigMonth.count(month))
                {
                    if(day <= 31) return  true;
                    return  false;
                }

        }
                else {
                if(month == 2)
                 {
                   if( day <= 28) return  true;
                    return false;
                 }
                else if(BigMonth.count(month))
                {
                    if(day <= 31) return  true;
                    return  false;
                }
    }
                return  false;
    };
   if(check())
   {
       QString dateCommand = "date";
       QString dateFlag = "-s";
       QString dateStr1 = QString::asprintf("%d-%02d-%02d", ui->sbYear->value(), ui->sbMonth->value(), ui->sbDay->value());
       QString dateStr2 = QString::asprintf("%02d:%02d:%02d", ui->sbHour->value(), ui->sbMinute->value(), ui->sbSecond->value());

       QProcess::execute(dateCommand + " " + dateFlag + " " + dateStr1);
       QProcess::execute(dateCommand + " " + dateFlag + " " + dateStr2);
       done(1);
   }
    return;
}
