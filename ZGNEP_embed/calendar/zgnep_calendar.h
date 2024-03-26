#ifndef ZGNEP_CALENDAR_H
#define ZGNEP_CALENDAR_H

#include <QDialog>

namespace Ui {
class zgnep_calendar;
}

class zgnep_calendar : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_calendar(QWidget *parent = nullptr);
    ~zgnep_calendar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::zgnep_calendar *ui;
};

#endif // ZGNEP_CALENDAR_H
