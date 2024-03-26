#include "zgnep_multimedia_audio.h"
#include <QFile>
#include <QApplication>
#include "./cover/zgnep_covershow.h"
zgnep_multiMedia_audio::zgnep_multiMedia_audio(QWidget *parent, QString dir, QString qfile):zgnep_audio(parent, dir, qfile)
{


    /* 指定文件 */
    QFile file("./multiMedia/zgnep_multiMedia_audio/audiostyle.qss");

    /* 判断文件是否存在 */
    if (file.exists() ) {
        /* 以只读的方式打开 */
        file.open(QFile::ReadOnly);
        /* 以字符串的方式保存读出的结果 */
        QString styleSheet = QLatin1String(file.readAll());
        /* 设置样式 */
        this->setStyleSheet(styleSheet);
        /* 关闭文件 */
        file.close();
    }
    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式

}
