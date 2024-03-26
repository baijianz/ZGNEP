#include "Widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QStack>
#include<QDebug>
#include<qmath.h>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Calculator");
    //数字
    connect(ui->pushButton_0,&QPushButton::clicked,[this](){add("0");});
    connect(ui->pushButton_1,&QPushButton::clicked,[this](){add("1");});
    connect(ui->pushButton_2,&QPushButton::clicked,[this](){add("2");});
    connect(ui->pushButton_3,&QPushButton::clicked,[this](){add("3");});
    connect(ui->pushButton_4,&QPushButton::clicked,[this](){add("4");});
    connect(ui->pushButton_5,&QPushButton::clicked,[this](){add("5");});
    connect(ui->pushButton_6,&QPushButton::clicked,[this](){add("6");});
    connect(ui->pushButton_7,&QPushButton::clicked,[this](){add("7");});
    connect(ui->pushButton_8,&QPushButton::clicked,[this](){add("8");});
    connect(ui->pushButton_9,&QPushButton::clicked,[this](){add("9");});
    //括号
    connect(ui->pushButton_11,&QPushButton::clicked,[this](){add("(");});
    connect(ui->pushButton_10,&QPushButton::clicked,[this](){add(")");});

    //符号
    connect(ui->pushButton_add,&QPushButton::clicked,[this](){add("+");});
    connect(ui->pushButton_sub,&QPushButton::clicked,[this](){add("-");});
    connect(ui->pushButton_mul,&QPushButton::clicked,[this](){add("*");});
    connect(ui->pushButton_div,&QPushButton::clicked,[this](){add("/");});
    connect(ui->pushButton_sur,&QPushButton::clicked,[this](){add("%");});
    connect(ui->pushButton_dot,&QPushButton::clicked,[this](){add(".");});

    //退格
    connect(ui->pushButton_B,&QPushButton::clicked,[this](){
        poly.remove(poly.length()-1,1);
        ui->lineEdit->setText(poly);
    });

    //清空
    connect(ui->pushButton_C,&QPushButton::clicked,[this](){
        poly.clear();
        ui->lineEdit->setText(poly);
    });

    //CE
    connect(ui->pushButton_CE,&QPushButton::clicked,[this](){
        while((!poly.isEmpty()) && priority(poly[poly.length()-1]) == 0){
            poly.remove(poly.length()-1,1);
            ui->lineEdit->setText(poly);
        }
    });

    //等号
    connect(ui->pushButton_equ,&QPushButton::clicked,[this](){
        add("=");
        //lineEdit_2用于保存记录
        ui->lineEdit_2->setText(hold += poly);

        poly = solution();

        result.clear();

        ui->lineEdit->setText(poly);

        ui->lineEdit_2->setText(hold = hold + poly + ";" );
    });

}

Widget::~Widget()
{
    delete ui;
}
void Widget::add(QString temp){
    poly += temp;
    ui->lineEdit->setText(poly);
}
int Widget::priority(QChar p)
{//优先级的判断
    if(p=="+"){
        return 1;
    }
    if(p=="-"){
        return 1;
    }
    if(p=="*"){
        return 2;
    }
    if(p=="/"){
        return 2;
    }
    if(p=="%"){
        return 2;
    }
    if(p=="/0"){
        return 3;
    }
    if(p==")"){
        return 4;
    }
    return 0;
}

void Widget::resolve(){
    QStack<QChar> ret;
    for(int i=0;i < poly.length();i++){
        if(poly[i] == "(")
        {//如果是"("直接入栈
            ret.push(poly[i]);
            if(poly[(++i)--] == "-")
            {
                result.push_back("0 ");
            }
            continue;
        }
        if(priority(poly[i]) == 4)
        {//如果遇到了右括号，则直到遇到左括号位置，将栈中元素全部出栈到result
            while(ret.top() != "("){
                result.push_back(ret.pop());
            }
            if(ret.top() == "("){
                ret.pop();
            }
            continue;
        }
        if(ret.isEmpty() && (priority(poly[i]) != 0))
        {//如果栈为空，且为符号，则入栈
            if((poly[i] == "-") && (result.isEmpty()))
            {//负数补0
                result.push_back("0 ");
            }
            ret.push(poly[i]);
            continue;
        }
        if((!ret.isEmpty()) && (priority(poly[i]) != 0) && (priority(ret.top()) < priority(poly[i])) && poly[i] != ")")
        {//如果字符串中的优先级大于,栈中字符的优先级，则入栈
            ret.push(poly[i]);
            continue;
        }
        if((!ret.isEmpty()) && (priority(poly[i]) != 0) && (priority(ret.top()) >= priority(poly[i])))
        {//如果小于等于，则出栈，入result
            result.push_back(ret.pop());
            while ((!ret.isEmpty()) && (priority(ret.top()) >= priority(poly[i]))) {
                result.push_back(ret.pop());
            }
            ret.push(poly[i]);
            continue;
        }
        if(poly[i] == "=")
        {//poly结束后，将栈中元素全部弹出到result，并结束循环
            int j=ret.length();
            for(int i=0;i < j;i++){
                result.push_back(ret.pop());
            }
            break;
        }
        if((poly[i] != ")") && (priority(poly[i]) == 0))
        {//如果是数字，则直接入result
            result.push_back(poly[i]);
            while((priority(poly[++i]) == 0) && poly[i] != "="){
                result.push_back(poly[i]);
            }
            result.push_back(" ");
            --i;
            continue;
        }
    }
}
QString Widget::solution(){
    resolve();
    QStack<QChar> ret;
    for(int i=0;i<result.length();i++){
        if(priority(result[i]) == 0){
            while(result[i] != " "){
                ret.push(result[i]);
                i++;
            }
            ret.push(result[i]);
            continue;
        }
        if(priority(result[i]) != 0){
            double val1;
            double val2;
            if(ret.top() == " "){
                ret.pop();
            }
            val1 = ret.pop().digitValue();
            while((ret.length() != 0) && (ret.top() != " "))
            {//得到第一个数
                if(ret.top() == "-")
                {//负数判断
                    val1 = 0 - val1;
                    ret.pop();
                    continue;
                }
                if(ret.top() == ".")
                {
                    //如果是有小数的话
                    ret.pop();
                    int n = digit(val1);
                    val1 = val1/n;
                    val1 += ret.pop().digitValue();
                    continue;
                }
                if(ret.top() == "0"){
                    int n = digit(val1);
                    val1 += 10 * n;
                    ret.pop();
                    while(ret.top() == "0")
                    {
                        val1 *= 10;
                        ret.pop();
                    }
                    val1 *= (ret.pop().digitValue());
                    continue;
                }
                if(ret.top() != "0"){
                    int n = digit(val1);
                    val1 += (ret.pop().digitValue())*n;
                }
            }
            if(ret.top() == " "){
                ret.pop();
            }
            val2 = ret.pop().digitValue();
            while((!ret.isEmpty()) && (ret.top() != " "))
            {//得到第二个数
                if(ret.top() == "-")
                {//负数判断
                    val2 = 0 - val2;
                    ret.pop();
                    continue;
                }
                if(ret.top() == ".")
                {//如果有小数的话
                    ret.pop();
                    int n = digit(val2);
                    val2 = val2/n;
                    val2 += ret.pop().digitValue();
                    continue;
                }

                if(ret.top() == "0"){
                    int n = digit(val2);
                    val2 += 10 * n;
                    ret.pop();
                    while(ret.top() == "0")
                    {
                        val2 *= 10;
                        ret.pop();
                    }
                    val2 *= (ret.pop().digitValue());
                    continue;
                }
                if(ret.top() != "0"){
                    int n = digit(val2);
                    val2 += (ret.pop().digitValue())*n;
                }
            }
            //计算
            QString val = calculation(val1,val2,result[i]);
            for (int i = 0;i < val.length();i++)
            {//把值入栈
                ret.push(val[i]);
            }
            ret.push(' ');
            continue;
        }
    }
    result.clear();
    if(ret.top() == " "){
        ret.pop();
    }
    while(!ret.isEmpty()){
        //使用头插
        result.push_front(ret.pop());
    }
    return result;
}
QString Widget::calculation(double val1,double val2,QChar op)
{//用于两个数的计算
    char p=op.toLatin1();
    QString tra;
    switch(p){
    case '+':
        return tra=QString::number(val2+val1);
    case '-':
        return tra=QString::number(val2-val1);
    case '*':
        return tra=QString::number(val2*val1);
    case '%':
    {
        double val = val2 - val1 *  qFloor(val2 / val1);
        return tra=QString::number(val);
    }
    case '/':
    default:
        return tra=QString::number(val2/val1);
    }
}
int Widget::digit(int temp){
    if(temp == 0){
        return 10;
    }
    int t = 1;
    while(temp != 0){
        temp = temp/10;
        t *= 10;
    }
    return t;
}


