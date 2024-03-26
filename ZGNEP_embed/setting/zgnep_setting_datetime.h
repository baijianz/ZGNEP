#ifndef ZGNEP_SETTING_DATETIME_H
#define ZGNEP_SETTING_DATETIME_H

#include <QWidget>
#include <QDialog>
namespace Ui {
class zgnep_setting_datetime;
}

class zgnep_setting_datetime : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_setting_datetime(QWidget *parent = nullptr);
    ~zgnep_setting_datetime();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_confirm_clicked();

private:
    Ui::zgnep_setting_datetime *ui;
};

#endif // ZGNEP_SETTING_DATETIME_H
