#ifndef ZGNEP_MSG_H
#define ZGNEP_MSG_H

#include <QWidget>
#include <QDialog>
#include <QPoint>
#include <QMouseEvent>
#include <thread>
#include <unistd.h>
// 设在按钮个数
enum MSG_TYPE
{
    SA_OK           = 0,    // 只有一个“确定”按钮，且两秒钟后自动关闭消息窗口
    SA_OKCANCEL     = 1,    // 一个“是”按钮，一个“否”按钮
    SA_OKS          = 2     // 只有一个“确定”按钮，不会自动关闭消息窗口
};

// 设在提示的类型
enum MSG_TIP_TYPE
{
    SA_SUCCESS      = 0,    // 完成
    SA_FAILED       = 1,    // 错误
    SA_WARNING      = 2,    // 警告
    SA_TIPS         = 3,    // 提示
    SA_QUESTION     = 4     // 未知
};

namespace Ui {
class zgnep_msg;
}
/* QDialog是QWidget类的子类，用于创建对话框窗口。
 * 对话框是指与用户进行交互的特殊窗口，例如提示信息、选择项、输入框等。QDialog类提供了一些常用的对话框窗口样式，如消息框、输入框、文件选择框等。
 * 模态和非模态：对话框可以分为模态对话框和非模态对话框。模态对话框在显示时会阻止用户与其他窗口进行交互，用户只能与当前的对话框交互。
 * 非模态对话框则可以与其他窗口并行使用。
 * 可以通过setModal()方法设置对话框的模态性。对话框结果：对话框可以返回一个结果给调用方，表明用户的操作或选择。
 * 可以通过QDialog的exec()方法来显示对话框，并通过QDialog::Accepted和QDialog::Rejected两个常量来表示用户的接受或拒绝操作。
 */
class zgnep_msg : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_msg(QWidget *parent = nullptr, MSG_TYPE nType = SA_OKCANCEL, MSG_TIP_TYPE nTipType = SA_TIPS);
    ~zgnep_msg();
    void SetTips(const std::string& strTips);
    static int zgnep_MsgBox(std::string strTips, MSG_TYPE nType, const MSG_TIP_TYPE nTipType, QWidget *parentWidget); //顶层函数

private slots:
    void on_btn_close_clicked();    // “叉”按钮槽函数
    void on_btn_confirm_clicked();  // “是”按钮槽函数
    void on_btn_cancel_clicked();   // “否”按钮槽函数

private:
    Ui::zgnep_msg *ui;
    int m_nType;
    int m_nTipType;

    QPoint m_pMousePoint;
    bool m_bMousePressed;

    std::thread *t1;	// 添加一个线程
    void _startTimerClose(int sec = 2); // 设在sec秒后关闭窗体
    void ticktack(int sec = 2); // 线程执行的函数，用于计时关闭窗体

protected:
    void mouseMoveEvent(QMouseEvent *event) override;		// 鼠标移动
    void mousePressEvent(QMouseEvent *event) override;		// 鼠标按下
    void mouseReleaseEvent(QMouseEvent *event) override;	// 鼠标释放
    void showEvent(QShowEvent *) override;                  // 窗体show前的事件操作
};

#endif // ZGNEP_MSG_H
