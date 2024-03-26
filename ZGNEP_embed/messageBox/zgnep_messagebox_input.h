#ifndef ZGNEP_MESSAGEBOX_INPUT_H
#define ZGNEP_MESSAGEBOX_INPUT_H
#include<QWidget>
#include <QDialog>
#include <QPoint>
#include <QMouseEvent>
enum MSG_INPUT_TYPE
{
    SA_JUDGEFILE,
    SA_NONE
};

namespace Ui {
class zgnep_messageBox_input;
}

class zgnep_messageBox_input : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_messageBox_input(QWidget *parent = nullptr, QString Tips = "");
    ~zgnep_messageBox_input();
    static bool checkFileExist(QString path, QString fileName);
    static QString zgnep_MsgBox_input(QString Tips, QString path, MSG_INPUT_TYPE inputType, QWidget* parent);


private slots:
    void on_btn_confirm_clicked();

    void on_btn_cancel_clicked();

    void on_btn_close_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::zgnep_messageBox_input *ui;
    QString defaultPath;      //测试路径
    QString userID;           //通过ID来确定路径

    QPoint m_pMousePoint;
    bool m_bMousePressed;

    QString fileName;
protected:
    void mouseMoveEvent(QMouseEvent *event) override;		// 鼠标移动
    void mousePressEvent(QMouseEvent *event) override;		// 鼠标按下
    void mouseReleaseEvent(QMouseEvent *event) override;	// 鼠标释放
};

#endif // ZGNEP_MESSAGEBOX_INPUT_H
