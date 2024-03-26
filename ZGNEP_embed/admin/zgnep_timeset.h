#ifndef ZGNEP_TIMESET_H
#define ZGNEP_TIMESET_H

#include <QDialog>

namespace Ui {
class zgnep_timeSet;
}

class zgnep_timeSet : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_timeSet(QWidget *parent = nullptr);
    ~zgnep_timeSet();
    bool checkConstrain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zgnep_timeSet *ui;
};

#endif // ZGNEP_TIMESET_H
