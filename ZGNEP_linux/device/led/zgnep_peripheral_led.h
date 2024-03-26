#ifndef ZGNEP_PERIPHERAL_LED_H
#define ZGNEP_PERIPHERAL_LED_H

#include <QFile>
#include <QDebug>
#include <QObject>
#include <list>
#define DS0 "/sys/devices/platform/leds/leds/sys-led"
#define DS1 "/sys/devices/platform/leds/leds/user-led"


class zgnep_peripheral_led: public QObject
{
    Q_OBJECT
public:
    zgnep_peripheral_led(QObject *parent = nullptr);
    ~zgnep_peripheral_led();
    /* 设置lED的状态 */
    int setLedState(int LED, bool flag);
    /* 获取LED的状态 */
    bool getLedState(int LED);
    /* 设置DS0的触发方式为默认 */
    int initDS0(void);
    /* 设置DS0的触发方式为心跳 */
    int recoverDS0(void);
    /* 改变LED的触发方式 */
    int changeTrigger(int LED, QString mode);
    QList<QString> LED_Trigger_ModeList = {"none", "rfkill-any", "rfkill-none", "kbd-scrolllock", "kbd-numlock", "kbd-capslock", "kbd-kanalock", "kbd-shiftlock", "kbd-altgrlock", "kbd-ctrllock", "kbd-altlock", "kbd-shiftllock", "kbd-shiftrlock", "kbd-ctrlllock", "kbd-ctrlrlock", "timer", "oneshot", "heartbeat", "backlight", "gpio", "cpu", "cpu0", "cpu1", "default-on", "transient", "flash", "torch", "mmc0", "mmc1", "mmc2", "rfkill0"};

private:
    /* 文件 */
    QFile file;
};

#endif // ZGNEP_PERIPHERAL_LED_H
