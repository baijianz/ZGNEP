/********************************************************************************
** Form generated from reading UI file 'zgnep_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_SETTING_H
#define UI_ZGNEP_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_setting
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QPushButton *btn_amendName;
    QPushButton *btn_amendImage;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *btn_return;
    QPushButton *btn_amendPass;
    QPushButton *btn_exitLogin;
    QPushButton *btn_shut;
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *frame_5;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEditID;
    QLabel *label_4;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditRole;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QLabel *label_profile;

    void setupUi(QWidget *zgnep_setting)
    {
        if (zgnep_setting->objectName().isEmpty())
            zgnep_setting->setObjectName(QString::fromUtf8("zgnep_setting"));
        zgnep_setting->resize(1442, 654);
        gridLayout_2 = new QGridLayout(zgnep_setting);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_2 = new QFrame(zgnep_setting);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btn_amendName = new QPushButton(frame_2);
        btn_amendName->setObjectName(QString::fromUtf8("btn_amendName"));
        QFont font;
        font.setPointSize(24);
        btn_amendName->setFont(font);
        btn_amendName->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;  /* Remove any border */\n"
"    padding: 0px;  /* No padding */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* Set the size of the icon */\n"
"    width: 100px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"QPushButton::text {\n"
"    /* Set the size of the text to fit the icon */\n"
"    font-size: 14px;  /* Adjust the font size as needed */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/\344\277\256\346\224\271.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_amendName->setIcon(icon);
        btn_amendName->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(btn_amendName, 0, 0, 1, 1);

        btn_amendImage = new QPushButton(frame_2);
        btn_amendImage->setObjectName(QString::fromUtf8("btn_amendImage"));
        btn_amendImage->setFont(font);
        btn_amendImage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;  /* Remove any border */\n"
"    padding: 0px;  /* No padding */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* Set the size of the icon */\n"
"    width: 100px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"QPushButton::text {\n"
"    /* Set the size of the text to fit the icon */\n"
"    font-size: 14px;  /* Adjust the font size as needed */\n"
"}"));
        btn_amendImage->setIcon(icon);
        btn_amendImage->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(btn_amendImage, 0, 1, 1, 1);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;  /* Remove any border */\n"
"    padding: 0px;  /* No padding */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* Set the size of the icon */\n"
"    width: 100px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"QPushButton::text {\n"
"    /* Set the size of the text to fit the icon */\n"
"    font-size: 14px;  /* Adjust the font size as needed */\n"
"}"));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;  /* Remove any border */\n"
"    padding: 0px;  /* No padding */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* Set the size of the icon */\n"
"    width: 100px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"QPushButton::text {\n"
"    /* Set the size of the text to fit the icon */\n"
"    font-size: 14px;  /* Adjust the font size as needed */\n"
"}"));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(pushButton_2, 0, 3, 1, 1);

        btn_return = new QPushButton(frame_2);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_return->sizePolicy().hasHeightForWidth());
        btn_return->setSizePolicy(sizePolicy);
        btn_return->setFont(font);
        btn_return->setLayoutDirection(Qt::LeftToRight);
        btn_return->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;  /* Remove any border */\n"
"    padding: 0px;  /* No padding */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* Set the size of the icon */\n"
"    width: 100px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"QPushButton::text {\n"
"    /* Set the size of the text to fit the icon */\n"
"    font-size: 14px;  /* Adjust the font size as needed */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/\350\277\224\345\233\236.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_return->setIcon(icon1);
        btn_return->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(btn_return, 1, 0, 1, 1);

        btn_amendPass = new QPushButton(frame_2);
        btn_amendPass->setObjectName(QString::fromUtf8("btn_amendPass"));
        sizePolicy.setHeightForWidth(btn_amendPass->sizePolicy().hasHeightForWidth());
        btn_amendPass->setSizePolicy(sizePolicy);
        btn_amendPass->setFont(font);
        btn_amendPass->setStyleSheet(QString::fromUtf8("#btn_amendPass {\n"
"    border: none;  /* Remove any border */\n"
"    padding: 0px;  /* No padding */\n"
"}\n"
"\n"
"#btn_amendPass::icon {\n"
"    /* Set the size of the icon */\n"
"    width: 60px;\n"
"    height: 60px;\n"
"}\n"
"\n"
"#btn_amendPass::indicator {\n"
"    /* Set the size of the indicator (e.g. arrow) if applicable */\n"
"    width: 60px;\n"
"    height: 60px;\n"
"}\n"
"\n"
"#btn_amendPass::text {\n"
"    /* Set the size of the text to fit the icon */\n"
"    font-size: 14px;  /* Adjust the font size as needed */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/\344\277\256\346\224\271\345\257\206\347\240\201.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_amendPass->setIcon(icon2);
        btn_amendPass->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(btn_amendPass, 1, 1, 1, 1);

        btn_exitLogin = new QPushButton(frame_2);
        btn_exitLogin->setObjectName(QString::fromUtf8("btn_exitLogin"));
        sizePolicy.setHeightForWidth(btn_exitLogin->sizePolicy().hasHeightForWidth());
        btn_exitLogin->setSizePolicy(sizePolicy);
        btn_exitLogin->setFont(font);
        btn_exitLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;  /* Remove any border */\n"
"    padding: 0px;  /* No padding */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* Set the size of the icon */\n"
"    width: 100px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"QPushButton::text {\n"
"    /* Set the size of the text to fit the icon */\n"
"    font-size: 14px;  /* Adjust the font size as needed */\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/\351\200\200\345\207\272\347\231\273\345\275\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_exitLogin->setIcon(icon3);
        btn_exitLogin->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(btn_exitLogin, 1, 2, 1, 1);

        btn_shut = new QPushButton(frame_2);
        btn_shut->setObjectName(QString::fromUtf8("btn_shut"));
        sizePolicy.setHeightForWidth(btn_shut->sizePolicy().hasHeightForWidth());
        btn_shut->setSizePolicy(sizePolicy);
        btn_shut->setFont(font);
        btn_shut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;  /* Remove any border */\n"
"    padding: 0px;  /* No padding */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* Set the size of the icon */\n"
"    width: 100px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"QPushButton::text {\n"
"    /* Set the size of the text to fit the icon */\n"
"    font-size: 14px;  /* Adjust the font size as needed */\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/\345\205\263\346\234\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_shut->setIcon(icon4);
        btn_shut->setIconSize(QSize(40, 40));

        gridLayout_4->addWidget(btn_shut, 1, 3, 1, 1);


        gridLayout_2->addWidget(frame_2, 1, 0, 1, 1);

        frame = new QFrame(zgnep_setting);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEditID = new QLineEdit(frame_5);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setFont(font);

        gridLayout_3->addWidget(lineEditID, 0, 1, 1, 1);

        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);


        gridLayout->addWidget(frame_5, 1, 2, 1, 2);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        lineEditRole = new QLineEdit(frame_4);
        lineEditRole->setObjectName(QString::fromUtf8("lineEditRole"));
        lineEditRole->setFont(font);

        horizontalLayout_2->addWidget(lineEditRole);


        gridLayout->addWidget(frame_4, 2, 2, 1, 2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEditName = new QLineEdit(frame_3);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setFont(font);

        horizontalLayout->addWidget(lineEditName);


        gridLayout->addWidget(frame_3, 0, 2, 1, 2);

        label_profile = new QLabel(frame);
        label_profile->setObjectName(QString::fromUtf8("label_profile"));
        label_profile->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));
        label_profile->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_profile, 0, 0, 3, 2);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 4);
        gridLayout_2->setRowStretch(1, 1);

        retranslateUi(zgnep_setting);

        QMetaObject::connectSlotsByName(zgnep_setting);
    } // setupUi

    void retranslateUi(QWidget *zgnep_setting)
    {
        zgnep_setting->setWindowTitle(QApplication::translate("zgnep_setting", "Form", nullptr));
        btn_amendName->setText(QApplication::translate("zgnep_setting", "\344\277\256\346\224\271\346\230\265\347\247\260", nullptr));
        btn_amendImage->setText(QApplication::translate("zgnep_setting", "\344\277\256\346\224\271\345\244\264\345\203\217", nullptr));
        pushButton->setText(QApplication::translate("zgnep_setting", "\346\265\213\350\257\225\346\214\211\351\222\256", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_setting", "\344\277\256\346\224\271\346\227\266\351\227\264", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_return->setToolTip(QApplication::translate("zgnep_setting", "\350\277\224\345\233\236", nullptr));
#endif // QT_NO_TOOLTIP
        btn_return->setText(QApplication::translate("zgnep_setting", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_amendPass->setToolTip(QApplication::translate("zgnep_setting", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
#endif // QT_NO_TOOLTIP
        btn_amendPass->setText(QApplication::translate("zgnep_setting", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_exitLogin->setToolTip(QApplication::translate("zgnep_setting", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
#endif // QT_NO_TOOLTIP
        btn_exitLogin->setText(QApplication::translate("zgnep_setting", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_shut->setToolTip(QApplication::translate("zgnep_setting", "\345\205\263\346\234\272", nullptr));
#endif // QT_NO_TOOLTIP
        btn_shut->setText(QApplication::translate("zgnep_setting", "\347\263\273\347\273\237\345\205\263\346\234\272", nullptr));
        label_4->setText(QApplication::translate("zgnep_setting", "ID   ", nullptr));
        label_3->setText(QApplication::translate("zgnep_setting", "\350\272\253\344\273\275", nullptr));
        label_2->setText(QApplication::translate("zgnep_setting", "\346\230\265\347\247\260", nullptr));
        label_profile->setText(QApplication::translate("zgnep_setting", "\345\244\264\345\203\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_setting: public Ui_zgnep_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_SETTING_H
