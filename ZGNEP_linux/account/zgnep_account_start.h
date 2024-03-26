#ifndef ZGNEP_ACCOUNT_START_H
#define ZGNEP_ACCOUNT_START_H

#include <QDialog>

namespace Ui {
class zgnep_account_start;
}

class zgnep_account_start : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_account_start(QWidget *parent = nullptr);
    ~zgnep_account_start();
protected:
    void resizeEvent(QResizeEvent *) override;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::zgnep_account_start *ui;
};

#endif // ZGNEP_ACCOUNT_START_H
