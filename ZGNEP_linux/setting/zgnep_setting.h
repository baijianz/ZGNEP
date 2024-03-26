#ifndef ZGNEP_SETTING_H
#define ZGNEP_SETTING_H

#include <QWidget>

namespace Ui {
class zgnep_setting;
}

class zgnep_setting : public QWidget
{
    Q_OBJECT

public:
    explicit zgnep_setting(QWidget *parent = nullptr);
    ~zgnep_setting();

private slots:
    void on_btn_return_clicked();

    void on_btn_shut_clicked();

    void on_pushButton_clicked();

    void on_btn_amendImage_clicked();

    void on_btn_amendName_clicked();


    void on_pushButton_2_clicked();

    void on_btn_amendPass_clicked();

    void on_btn_exitLogin_clicked();

private:
    Ui::zgnep_setting *ui;
    QString proFilePath = "";
    bool profileFlag = false;
    bool nameFlag = false;
};

#endif // ZGNEP_SETTING_H
