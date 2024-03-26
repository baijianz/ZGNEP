/********************************************************************************
** Form generated from reading UI file 'zgnep_setting_amendpass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_SETTING_AMENDPASS_H
#define UI_ZGNEP_SETTING_AMENDPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_setting_amendPass
{
public:
    QPushButton *btn_confirm;
    QPushButton *btn_cancel;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineditOriginPassWord;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineditNewPassWord;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineditConfrimPassWord;

    void setupUi(QDialog *zgnep_setting_amendPass)
    {
        if (zgnep_setting_amendPass->objectName().isEmpty())
            zgnep_setting_amendPass->setObjectName(QString::fromUtf8("zgnep_setting_amendPass"));
        zgnep_setting_amendPass->resize(818, 392);
        btn_confirm = new QPushButton(zgnep_setting_amendPass);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setGeometry(QRect(290, 310, 70, 30));
        btn_confirm->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/confirm_normal.png);"));
        btn_cancel = new QPushButton(zgnep_setting_amendPass);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(380, 310, 70, 30));
        btn_cancel->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/cancel_normal.png);"));
        label_4 = new QLabel(zgnep_setting_amendPass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 240, 311, 57));
        widget = new QWidget(zgnep_setting_amendPass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 50, 661, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineditOriginPassWord = new QLineEdit(widget);
        lineditOriginPassWord->setObjectName(QString::fromUtf8("lineditOriginPassWord"));

        horizontalLayout->addWidget(lineditOriginPassWord);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineditNewPassWord = new QLineEdit(widget);
        lineditNewPassWord->setObjectName(QString::fromUtf8("lineditNewPassWord"));

        horizontalLayout_2->addWidget(lineditNewPassWord);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineditConfrimPassWord = new QLineEdit(widget);
        lineditConfrimPassWord->setObjectName(QString::fromUtf8("lineditConfrimPassWord"));

        horizontalLayout_3->addWidget(lineditConfrimPassWord);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(zgnep_setting_amendPass);

        QMetaObject::connectSlotsByName(zgnep_setting_amendPass);
    } // setupUi

    void retranslateUi(QDialog *zgnep_setting_amendPass)
    {
        zgnep_setting_amendPass->setWindowTitle(QApplication::translate("zgnep_setting_amendPass", "Dialog", nullptr));
        btn_confirm->setText(QApplication::translate("zgnep_setting_amendPass", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QApplication::translate("zgnep_setting_amendPass", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QApplication::translate("zgnep_setting_amendPass", "\345\257\206\347\240\201\351\225\277\345\272\246\351\231\220\345\210\266\344\270\272[6, 20], \344\270\215\345\214\205\346\213\254\347\211\271\346\256\212\345\255\227\347\254\246\345\222\214\347\254\246\345\217\267", nullptr));
        label->setText(QApplication::translate("zgnep_setting_amendPass", "\345\216\237\345\257\206\347\240\201   ", nullptr));
        label_2->setText(QApplication::translate("zgnep_setting_amendPass", "\346\226\260\345\257\206\347\240\201  ", nullptr));
        label_3->setText(QApplication::translate("zgnep_setting_amendPass", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_setting_amendPass: public Ui_zgnep_setting_amendPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_SETTING_AMENDPASS_H
