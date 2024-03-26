#include "zgnep_msg.h"
#include "ui_zgnep_msg.h"
#include <QScreen>
zgnep_msg::zgnep_msg(QWidget *parent, MSG_TYPE nType, MSG_TIP_TYPE nTipType) :
    QDialog(parent),
    ui(new Ui::zgnep_msg)
{
    t1 = nullptr; //初始化线程
    ui->setupUi(this);
    QList <QScreen *> list_screen =  QGuiApplication::screens();
#if __arm__

#else
    this->resize(800 / 2, 150);
#endif
    this->m_nType = nType;
    this->m_nTipType = nTipType;
    /*Qt::Tool：这个标志位表示窗口是一个工具窗口，通常用于显示工具栏、调色板等工具性质的窗口。工具窗口通常不会显示在任务栏中。
      Qt::FramelessWindowHint：这个标志位表示窗口没有边框，也就是窗口没有标题栏、边框和窗口按钮（最小化、最大化、关闭按钮）。这样的窗口通常用于自定义非标准窗口。
      Qt::WindowStaysOnTopHint：这个标志位表示窗口始终保持在其他窗口的顶部，即始终处于最顶层。这样可以确保窗口始终处于用户视野的最前面。
    */
    setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    // 设置窗体关闭时自动释放内存
    this->setAttribute(Qt::WA_DeleteOnClose);
    // 设在按钮
    if(MSG_TYPE::SA_OK == m_nType)
    {
        ui->btn_cancel->setVisible(false);  // 隐藏“否”按钮
        ui->btn_confirm->setText("确定");
    }
    else if(MSG_TYPE::SA_OKCANCEL == m_nType)
    {
        ui->btn_cancel->setVisible(true);   // 显示“否”按钮
        ui->btn_confirm->setText("是");
    }
    else if (MSG_TYPE::SA_OKS == m_nType)
    {
        ui->btn_cancel->setVisible(false);  // 隐藏“否”按钮
        ui->btn_confirm->setText("确定");
    }

    // 设在两个按钮样式，这样设在效果：当鼠标移动到按钮上方，会切换对应设在的图片，移开后又会设在回来
    QString strStyle = "QPushButton{border:0;background:transparent;background-image: url(:/src/cancel_normal.png);}"
                   "QPushButton:hover{border:0;background:transparent;background-image: url(:/src/cancel_hover.png);}";
    ui->btn_cancel->setStyleSheet(strStyle);

    strStyle = "QPushButton{border:0;background:transparent;background-image: url(:/src/confirm_normal.png);}"
           "QPushButton:hover{border:0;background:transparent;background-image: url(:/src/confirm_hover.png);}";
    ui->btn_confirm->setStyleSheet(strStyle);


    // 根据参数，设在当前消息弹窗需要显示的图片(显示类型)
    if(SA_SUCCESS == m_nTipType)
    {
        strStyle = "QLabel{border:0;background:transparent;background-image: url(:/src/success_icon.png);}";
    }
    else if (SA_FAILED == m_nTipType)
    {
        strStyle = "QLabel{border:0;background:transparent;background-image: url(:/src/error_icon.png);}";
    }
    else if (SA_WARNING == m_nTipType)
    {
        strStyle = "QLabel{border:0;background:transparent;background-image: url(:/src/warning_icon.png);}";
    }
    else if (SA_TIPS == m_nTipType)
    {
        strStyle = "QLabel{border:0;background:transparent;background-image: url(:/src/tips_icon.png);}";
    }
    else if (SA_QUESTION == m_nTipType)
    {
        strStyle = "QLabel{border:0;background:transparent;background-image: url(:/src/question_icon.png);}";
    }
    ui->label_icon->setStyleSheet(strStyle);

}

zgnep_msg::~zgnep_msg()
{
    delete ui;
}

void zgnep_msg::SetTips(const std::string &strTips)
{
    ui->label_tips->setText(strTips.c_str());
}

int zgnep_msg::zgnep_MsgBox(std::string strTips, MSG_TYPE nType, const MSG_TIP_TYPE nTipType, QWidget *parentWidget)
{
    zgnep_msg* psrc = new zgnep_msg(nullptr, nType, nTipType);
    psrc->SetTips(strTips.c_str());      // 设置提示语
    psrc->setModal(true);                // 设置为模态
#if __arm__
    QList <QScreen *> list_screen =  QGuiApplication::screens();
    psrc->move(list_screen.at(0)->geometry().width() / 2 - psrc->width() / 2, list_screen.at(0)->geometry().height() / 2 - psrc->height() / 2);
#else
    // 计算父窗口的中心点
    QPoint parentCenter = parentWidget->geometry().center();

    // 计算子窗口应该出现的位置，使其在父窗口中央
    int x = parentCenter.x() - psrc->width() / 2;
    int y = parentCenter.y() - psrc->height() / 2;

    // 移动子窗口到计算出的位置
    psrc->move(x, y);
#endif
    int nRes = psrc->exec();             // 运行
    return nRes;                         // 返回值
}

void zgnep_msg::on_btn_close_clicked()
{
    // .exec()结束后返回0
    done(0);
    this->close();
}

void zgnep_msg::on_btn_confirm_clicked()
{
    // .exec()结束后返回1
    done(1);
    this->close();
}

void zgnep_msg::on_btn_cancel_clicked()
{
    // .exec()结束后返回1
    done(0);
    this->close();
}

void zgnep_msg::_startTimerClose(int sec)
{
    if (t1) {
        delete t1;
        t1 = nullptr;
    }

    // 定义线程
    t1 = new std::thread(&zgnep_msg::ticktack, this, sec);
    t1->detach();
}

void zgnep_msg::ticktack(int sec)
{
    int secTicktack = 0;
    while (false == this->isHidden()) {     // 如果窗体是显示的

        // 判断秒数相等，则关闭窗体
        if (secTicktack == sec) {
            done(1);
            this->close();
            break;
        }
        sleep(1);   // Sleep(1);
        secTicktack++;
    }
}

void zgnep_msg::mouseMoveEvent(QMouseEvent *event)
{
    // 如果鼠标是按下的
    if(m_bMousePressed)
    {
        // 移动窗体
        move(event->pos() - m_pMousePoint + pos());
    }
}

void zgnep_msg::mousePressEvent(QMouseEvent *event)
{
    // 鼠标左键按下
    if(event->button() == Qt::LeftButton)
    {
        // 标志设置true
        m_bMousePressed = true;
        // 获取当前窗体位置
        m_pMousePoint = event->pos();
    }
}

void zgnep_msg::mouseReleaseEvent(QMouseEvent *event)
{
    // 鼠标左键释放(松开)
    if(event->button() == Qt::LeftButton) {
        // 鼠标松开，标志设在false
        m_bMousePressed = false;
    }
}

void zgnep_msg::showEvent(QShowEvent *)
{
    if(MSG_TYPE::SA_OK == m_nType) {
        _startTimerClose(2);
    }
}

