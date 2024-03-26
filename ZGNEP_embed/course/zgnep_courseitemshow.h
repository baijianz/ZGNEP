#ifndef ZGNEP_COURSEITEMSHOW_H
#define ZGNEP_COURSEITEMSHOW_H

#include <QDialog>

namespace Ui {
class zgnep_courseItemShow;
}

class zgnep_courseItemShow : public QDialog
{
    Q_OBJECT

public:

   explicit zgnep_courseItemShow(QWidget *parent = nullptr, QString CourseID = "", QString dateTime = " ");

    ~zgnep_courseItemShow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::zgnep_courseItemShow *ui;
};

#endif // ZGNEP_COURSEITEMSHOW_H
