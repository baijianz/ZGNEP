/********************************************************************************
** Form generated from reading UI file 'zgnep_messagebox_input.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_MESSAGEBOX_INPUT_H
#define UI_ZGNEP_MESSAGEBOX_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_zgnep_messageBox_input
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_tips;
    QLineEdit *lineEdit;
    QPushButton *btn_confirm;
    QPushButton *btn_cancel;
    QFrame *frame_1;
    QGridLayout *gridLayout_3;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_close;

    void setupUi(QDialog *zgnep_messageBox_input)
    {
        if (zgnep_messageBox_input->objectName().isEmpty())
            zgnep_messageBox_input->setObjectName(QString::fromUtf8("zgnep_messageBox_input"));
        zgnep_messageBox_input->resize(420, 219);
        gridLayout_2 = new QGridLayout(zgnep_messageBox_input);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_2 = new QFrame(zgnep_messageBox_input);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_tips = new QLabel(frame_2);
        label_tips->setObjectName(QString::fromUtf8("label_tips"));

        horizontalLayout->addWidget(label_tips);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        btn_confirm = new QPushButton(frame_2);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/confirm_normal.png);background-repeat: no-repeat;"));

        gridLayout->addWidget(btn_confirm, 1, 0, 1, 1);

        btn_cancel = new QPushButton(frame_2);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/cancel_normal.png);background-repeat: no-repeat;"));

        gridLayout->addWidget(btn_cancel, 1, 1, 1, 1);


        gridLayout_2->addWidget(frame_2, 1, 0, 1, 1);

        frame_1 = new QFrame(zgnep_messageBox_input);
        frame_1->setObjectName(QString::fromUtf8("frame_1"));
        frame_1->setBaseSize(QSize(400, 30));
        frame_1->setAutoFillBackground(false);
        frame_1->setStyleSheet(QString::fromUtf8("background-image: url(:/src/title_bg.png);    background-size: cover;\n"
"    background-repeat: no-repeat;"));
        gridLayout_3 = new QGridLayout(frame_1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_title = new QLabel(frame_1);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setStyleSheet(QString::fromUtf8("border:0;color: rgb(255, 255, 255); background:transparent;\n"
"background-repeat:no-repeat\n"
""));

        gridLayout_3->addWidget(label_title, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        btn_close = new QPushButton(frame_1);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setStyleSheet(QString::fromUtf8("border:0px; background:transparent; background-image: url(:/src/close_normal.png);background-repeat: no-repeat;"));

        gridLayout_3->addWidget(btn_close, 0, 2, 1, 1);


        gridLayout_2->addWidget(frame_1, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 4);

        retranslateUi(zgnep_messageBox_input);

        QMetaObject::connectSlotsByName(zgnep_messageBox_input);
    } // setupUi

    void retranslateUi(QDialog *zgnep_messageBox_input)
    {
        zgnep_messageBox_input->setWindowTitle(QApplication::translate("zgnep_messageBox_input", "Dialog", nullptr));
        label_tips->setText(QApplication::translate("zgnep_messageBox_input", "tips:", nullptr));
        btn_confirm->setText(QApplication::translate("zgnep_messageBox_input", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QApplication::translate("zgnep_messageBox_input", "\345\217\226\346\266\210", nullptr));
        label_title->setText(QApplication::translate("zgnep_messageBox_input", "\347\237\245\346\233\264\351\270\237\346\225\231\350\202\262\345\271\263\345\217\260-\350\276\223\345\205\245", nullptr));
        btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zgnep_messageBox_input: public Ui_zgnep_messageBox_input {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_MESSAGEBOX_INPUT_H
