/********************************************************************************
** Form generated from reading UI file 'zgnep_msg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_MSG_H
#define UI_ZGNEP_MSG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_msg
{
public:
    QFrame *frame_1;
    QLabel *label_title;
    QPushButton *btn_close;
    QFrame *frame_2;
    QLabel *label_icon;
    QLabel *label_tips;
    QPushButton *btn_confirm;
    QPushButton *btn_cancel;

    void setupUi(QWidget *zgnep_msg)
    {
        if (zgnep_msg->objectName().isEmpty())
            zgnep_msg->setObjectName(QString::fromUtf8("zgnep_msg"));
        zgnep_msg->resize(401, 153);
        frame_1 = new QFrame(zgnep_msg);
        frame_1->setObjectName(QString::fromUtf8("frame_1"));
        frame_1->setGeometry(QRect(0, 0, 400, 30));
        frame_1->setBaseSize(QSize(400, 30));
        frame_1->setAutoFillBackground(false);
        frame_1->setStyleSheet(QString::fromUtf8("background-image: url(:/src/title_bg.png);"));
        label_title = new QLabel(frame_1);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(10, 5, 191, 20));
        label_title->setStyleSheet(QString::fromUtf8("border:0;color: rgb(255, 255, 255); background:transparent;"));
        btn_close = new QPushButton(frame_1);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(375, 6, 18, 18));
        btn_close->setStyleSheet(QString::fromUtf8("border:0px; background:transparent; background-image: url(:/src/close_normal.png);"));
        frame_2 = new QFrame(zgnep_msg);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 30, 400, 120));
        frame_2->setBaseSize(QSize(400, 120));
        frame_2->setStyleSheet(QString::fromUtf8("background:transparent; background-color: rgb(255, 255, 255);"));
        label_icon = new QLabel(frame_2);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(40, 30, 32, 32));
        label_icon->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/tips_icon.png);"));
        label_tips = new QLabel(frame_2);
        label_tips->setObjectName(QString::fromUtf8("label_tips"));
        label_tips->setGeometry(QRect(80, 30, 291, 40));
        label_tips->setStyleSheet(QString::fromUtf8("border:0; background:transparent; color: rgb(51, 51, 51);"));
        btn_confirm = new QPushButton(frame_2);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setGeometry(QRect(200, 80, 70, 30));
        btn_confirm->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/confirm_normal.png);"));
        btn_cancel = new QPushButton(frame_2);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(290, 80, 70, 30));
        btn_cancel->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/cancel_normal.png);"));

        retranslateUi(zgnep_msg);

        QMetaObject::connectSlotsByName(zgnep_msg);
    } // setupUi

    void retranslateUi(QWidget *zgnep_msg)
    {
        zgnep_msg->setWindowTitle(QApplication::translate("zgnep_msg", "Form", nullptr));
        label_title->setText(QApplication::translate("zgnep_msg", "\347\237\245\346\233\264\351\270\237\346\225\231\350\202\262\345\271\263\345\217\260-\346\217\220\347\244\272", nullptr));
        btn_close->setText(QString());
        label_icon->setText(QString());
        label_tips->setText(QApplication::translate("zgnep_msg", "\350\277\231\346\230\257\344\270\200\344\270\252\346\265\213\350\257\225\344\277\241\346\201\257\357\274\201", nullptr));
        btn_confirm->setText(QApplication::translate("zgnep_msg", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QApplication::translate("zgnep_msg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_msg: public Ui_zgnep_msg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_MSG_H
