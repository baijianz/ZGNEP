#ifndef ZGNEP_SETTING_AMENDPASS_H
#define ZGNEP_SETTING_AMENDPASS_H

#include <QDialog>

namespace Ui {
class zgnep_setting_amendPass;
}

class zgnep_setting_amendPass : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_setting_amendPass(QWidget *parent = nullptr);
    ~zgnep_setting_amendPass();

private slots:
    void on_btn_confirm_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::zgnep_setting_amendPass *ui;
};

#endif // ZGNEP_SETTING_AMENDPASS_H
