#include "zgnep_multimedia_video.h"
#include <QFile>
#include "./cover/zgnep_covershow.h"
zgnep_multiMedia_video::zgnep_multiMedia_video(QWidget *parent, QString dir, QString path):zgnep_video(parent, dir, path)
{
    this->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

    QFile file("./multiMedia/zgnep_multiMedia_video/videostyle.qss");
     /* 判断文件是否存在 */
     if (file.exists() ) {
         /* 以只读的方式打开 */
         file.open(QFile::ReadOnly);
         /* 以字符串的方式保存读出的结果 */
         QString styleSheet = QLatin1String(file.readAll());
         /* 设置全局样式 */
         this->setStyleSheet(styleSheet);
         /* 关闭文件 */
         file.close();
     }
     this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
}
