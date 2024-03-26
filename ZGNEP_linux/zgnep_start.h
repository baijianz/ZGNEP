#ifndef ZGNEP_START_H
#define ZGNEP_START_H

#include <QWidget>

namespace Ui {
class ZGNEP_start;
}

class ZGNEP_start : public QWidget
{
    Q_OBJECT

public:
    explicit ZGNEP_start(QWidget *parent = nullptr);
    ~ZGNEP_start();

private:
    Ui::ZGNEP_start *ui;
};

#endif // ZGNEP_START_H
