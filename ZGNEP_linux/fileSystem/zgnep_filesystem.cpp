#include "zgnep_filesystem.h"
#include "./cover/zgnep_covershow.h"
#include <QtWidgets>
zgnep_fileSystem::zgnep_fileSystem(QWidget *parent): MainWindow(parent)
{

    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
}
