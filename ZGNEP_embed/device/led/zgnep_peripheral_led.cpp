#include "zgnep_peripheral_led.h"

zgnep_peripheral_led::zgnep_peripheral_led(QObject *parent)
{
    this->setParent(parent);
}

zgnep_peripheral_led::~zgnep_peripheral_led()
{
    destroyed(this);
}

int zgnep_peripheral_led::setLedState(int LED, bool flag)
{
    qDebug()<<flag<<endl;

    /* 开发板的LED控制接口 */
    if(LED == 0) file.setFileName(QString(DS0) + "/brightness");
    else file.setFileName(QString(DS1) + "/brightness");

    qDebug() << file.fileName() << endl;

    /* 如果文件不存在，则返回 */
    if (!file.exists())
        return 0;

    if(!file.open(QIODevice::ReadWrite))
        qDebug()<<file.errorString();

    QByteArray buf[2] = {"0", "1"};

    /* 写0或1,1~255都可以点亮LED */
    if (flag)
        file.write(buf[1]);
    else
        file.write(buf[0]);

    /* 关闭文件 */
    file.close();
    return 1;
}

bool zgnep_peripheral_led::getLedState(int LED)
{
    /* 开发板的LED控制接口 */
    file.close();
    if(LED == 0) file.setFileName(QString(DS0) + "/brightness");
    else file.setFileName(QString(DS1) + "/brightness");

    if(!file.open(QIODevice::ReadWrite))
        qDebug()<<file.errorString();

    QTextStream in(&file);
    QString Read = in.readLine();
    if(Read == "1") return  true;
    return false;

}

/* DS0作为系统呼吸灯，如果想要控制，则要改变触发方式 */
int zgnep_peripheral_led::initDS0()
{
    return changeTrigger(0, "none");
}

int zgnep_peripheral_led::changeTrigger(int LED, QString mode)
{
    if(!LED_Trigger_ModeList.count(mode)) return  0;
    /* 开发板的LED控制接口 */
    file.close();
    if(LED == 0) file.setFileName(QString(DS0) + "/trigger");
    else file.setFileName(QString(DS1) + "/trigger");
    char *path = QString("echo " + mode + " > " + file.fileName()).toUtf8().data();
    qDebug() << path << endl;
    system(path);

    return 1;
}

int zgnep_peripheral_led::recoverDS0()
{
   return changeTrigger(0, "heartbeat");
}

