#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    QString result;//保存结果
    QString hold;//保存记录
    int priority(QChar p);//设置运算符优先级
    void resolve();//取得后缀表达式result
    QString solution();//求解
    QString calculation(double val1,double val2,QChar op);//两个数的运算
    int digit(int val);

    ~Widget();
public slots:
    void add(QString temp);//用于从按键添加符号，和更新poly
private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    QString poly;//保存多项式

};

#endif // WIDGET_H
