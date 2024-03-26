#include "zgnep_calc.h"

zgnep_calc::zgnep_calc(QWidget *parent):Widget(parent)
{
    this->setWindowTitle("zgnep_calc");
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
}
