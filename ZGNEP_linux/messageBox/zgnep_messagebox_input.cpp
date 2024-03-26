#include "zgnep_messagebox_input.h"
#include "ui_zgnep_messagebox_input.h"
#include "zgnep_msg.h"
#include <QFile>
zgnep_messageBox_input::zgnep_messageBox_input(QWidget *parent, QString Tips) :
    QDialog(parent),
    ui(new Ui::zgnep_messageBox_input)
{
    ui->setupUi(this);
    ui->label_tips->setText(Tips);
    setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    // 设置窗体关闭时自动释放内存
    this->setAttribute(Qt::WA_DeleteOnClose);
}

zgnep_messageBox_input::~zgnep_messageBox_input()
{
    delete ui;
}

bool zgnep_messageBox_input::checkFileExist(QString path, QString fileName)
{
    QFile file(path + fileName);
    if(file.exists()) return false;
}

QString zgnep_messageBox_input::zgnep_MsgBox_input(QString Tips, QString path, MSG_INPUT_TYPE inputType, QWidget* parent)
{
    zgnep_messageBox_input *mode = new zgnep_messageBox_input(nullptr, Tips);
    QPoint parentCenter = parent->geometry().center();
    mode->setModal(true);
    // 计算子窗口应该出现的位置，使其在父窗口中央
    int x = parentCenter.x() - mode->width() / 2;
    int y = parentCenter.y() - mode->height() / 2;
    // 移动子窗口到计算出的位置
    mode->move(x, y);
    if(mode->exec())
    {
        try {
            QString fileName = mode->fileName.simplified().replace(" ", "");
            QByteArray utf8FileName = fileName.toUtf8();
            if(inputType == MSG_INPUT_TYPE::SA_JUDGEFILE)
            {
                if(checkFileExist(path, fileName))
                {
                    zgnep_msg::zgnep_MsgBox("已有同名文件(两秒后自动关闭)",MSG_TYPE::SA_OK, MSG_TIP_TYPE::SA_FAILED, parent);
                    return  "";
                }
                 return QString::fromUtf8(utf8FileName);;
            }
             return QString::fromUtf8(utf8FileName);;
        } catch (std::exception &ex) {
            return  "error";
        }

    }
    return "";
}

void zgnep_messageBox_input::on_btn_confirm_clicked()
{
    done(1);
    this->close();
}


void zgnep_messageBox_input::on_btn_cancel_clicked()
{
    done(0);
    this->close();
}

void zgnep_messageBox_input::on_btn_close_clicked()
{
     done(0);
     this->close();
}
void zgnep_messageBox_input::mouseMoveEvent(QMouseEvent *event)
{
    // 如果鼠标是按下的
    if(m_bMousePressed)
    {
        // 移动窗体
        move(event->pos() - m_pMousePoint + pos());
    }
}

void zgnep_messageBox_input::mousePressEvent(QMouseEvent *event)
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

void zgnep_messageBox_input::mouseReleaseEvent(QMouseEvent *event)
{
    // 鼠标左键释放(松开)
    if(event->button() == Qt::LeftButton) {
        // 鼠标松开，标志设在false
        m_bMousePressed = false;
    }
}

void zgnep_messageBox_input::on_lineEdit_textEdited(const QString &arg1)
{
    fileName = arg1;
}
