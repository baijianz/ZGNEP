/********************************************************************************
** Form generated from reading UI file 'zgnep_main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_MAIN_H
#define UI_ZGNEP_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZGNEP_Main
{
public:
    QAction *actionSetting;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QLabel *label_image;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_4;
    QGridLayout *gridLayout_3;
    QLabel *label_dateTime;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_5;
    QGridLayout *gridLayout_5;
    QLabel *label_state;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *zgenp_main_text;
    QPushButton *ZGNEP_main_pushBtn_setting;
    QPushButton *zgenp_main_calc;
    QPushButton *ZGNEP_main_pushBtn_video;
    QPushButton *ZGNEP_main_pushBtn_demonstrate;
    QPushButton *ZGNEP_main_pushBtn_transport;
    QPushButton *zgnep_main_ppt;
    QPushButton *ZGNEP_main_pushBtn_audio;
    QPushButton *zgnep_main_photo;
    QPushButton *ZGNEP_main_pushBtn_file;
    QPushButton *ZGNEP_main_pushBtn_whiteBoard;
    QPushButton *zgnep_main_word;
    QPushButton *zgnep_main_course;
    QPushButton *zgnep_main_calender;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ZGNEP_Main)
    {
        if (ZGNEP_Main->objectName().isEmpty())
            ZGNEP_Main->setObjectName(QString::fromUtf8("ZGNEP_Main"));
        ZGNEP_Main->resize(1374, 632);
        ZGNEP_Main->setLayoutDirection(Qt::LeftToRight);
        actionSetting = new QAction(ZGNEP_Main);
        actionSetting->setObjectName(QString::fromUtf8("actionSetting"));
        actionSetting->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/main/src/icon/\350\256\276\347\275\256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon);
        centralwidget = new QWidget(ZGNEP_Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_image = new QLabel(frame_3);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setLayoutDirection(Qt::LeftToRight);
        label_image->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_image->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_image, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_3, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_dateTime = new QLabel(frame_4);
        label_dateTime->setObjectName(QString::fromUtf8("label_dateTime"));
        QFont font;
        font.setPointSize(25);
        label_dateTime->setFont(font);
        label_dateTime->setStyleSheet(QString::fromUtf8("background-image:url(:/main/src/icon/\346\226\207\345\255\227\345\272\225\345\233\276.jpg);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"background-attachment: fixed;\n"
"background-size: contain;"));
        label_dateTime->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_dateTime, 1, 0, 1, 1);


        gridLayout_4->addWidget(frame_4, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(116, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_state = new QLabel(frame_5);
        label_state->setObjectName(QString::fromUtf8("label_state"));
        QFont font1;
        font1.setPointSize(24);
        label_state->setFont(font1);
        label_state->setStyleSheet(QString::fromUtf8("background:#16A085;color:#FFFFFF;border-radius:5px;"));

        gridLayout_5->addWidget(label_state, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_5, 0, 4, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 1);
        gridLayout_4->setColumnStretch(2, 5);
        gridLayout_4->setColumnStretch(3, 1);
        gridLayout_4->setColumnStretch(4, 3);

        verticalLayout->addWidget(frame_2);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        zgenp_main_text = new QPushButton(frame);
        zgenp_main_text->setObjectName(QString::fromUtf8("zgenp_main_text"));
        zgenp_main_text->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/main/src/icon/\350\256\260\344\272\213\346\234\254.png"), QSize(), QIcon::Normal, QIcon::Off);
        zgenp_main_text->setIcon(icon1);
        zgenp_main_text->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(zgenp_main_text, 0, 4, 1, 1);

        ZGNEP_main_pushBtn_setting = new QPushButton(frame);
        ZGNEP_main_pushBtn_setting->setObjectName(QString::fromUtf8("ZGNEP_main_pushBtn_setting"));
        QFont font2;
        font2.setPointSize(18);
        ZGNEP_main_pushBtn_setting->setFont(font2);
        ZGNEP_main_pushBtn_setting->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        ZGNEP_main_pushBtn_setting->setIcon(icon);
        ZGNEP_main_pushBtn_setting->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(ZGNEP_main_pushBtn_setting, 1, 0, 1, 1);

        zgenp_main_calc = new QPushButton(frame);
        zgenp_main_calc->setObjectName(QString::fromUtf8("zgenp_main_calc"));
        zgenp_main_calc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/main/src/icon/\350\256\241\347\256\227\345\231\250.png"), QSize(), QIcon::Normal, QIcon::Off);
        zgenp_main_calc->setIcon(icon2);
        zgenp_main_calc->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(zgenp_main_calc, 0, 0, 1, 1);

        ZGNEP_main_pushBtn_video = new QPushButton(frame);
        ZGNEP_main_pushBtn_video->setObjectName(QString::fromUtf8("ZGNEP_main_pushBtn_video"));
        ZGNEP_main_pushBtn_video->setFont(font2);
        ZGNEP_main_pushBtn_video->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/main/src/icon/\346\222\255\346\224\276\345\231\250.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZGNEP_main_pushBtn_video->setIcon(icon3);
        ZGNEP_main_pushBtn_video->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(ZGNEP_main_pushBtn_video, 1, 4, 1, 1);

        ZGNEP_main_pushBtn_demonstrate = new QPushButton(frame);
        ZGNEP_main_pushBtn_demonstrate->setObjectName(QString::fromUtf8("ZGNEP_main_pushBtn_demonstrate"));
        ZGNEP_main_pushBtn_demonstrate->setFont(font2);
        ZGNEP_main_pushBtn_demonstrate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/main/src/icon/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZGNEP_main_pushBtn_demonstrate->setIcon(icon4);
        ZGNEP_main_pushBtn_demonstrate->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(ZGNEP_main_pushBtn_demonstrate, 0, 2, 1, 1);

        ZGNEP_main_pushBtn_transport = new QPushButton(frame);
        ZGNEP_main_pushBtn_transport->setObjectName(QString::fromUtf8("ZGNEP_main_pushBtn_transport"));
        ZGNEP_main_pushBtn_transport->setFont(font2);
        ZGNEP_main_pushBtn_transport->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/main/src/icon/\346\226\207\344\273\266\344\274\240\350\276\223\345\212\251\346\211\213.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZGNEP_main_pushBtn_transport->setIcon(icon5);
        ZGNEP_main_pushBtn_transport->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(ZGNEP_main_pushBtn_transport, 1, 2, 1, 1);

        zgnep_main_ppt = new QPushButton(frame);
        zgnep_main_ppt->setObjectName(QString::fromUtf8("zgnep_main_ppt"));
        zgnep_main_ppt->setAutoFillBackground(false);
        zgnep_main_ppt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/main/src/icon/ppt.png"), QSize(), QIcon::Normal, QIcon::Off);
        zgnep_main_ppt->setIcon(icon6);
        zgnep_main_ppt->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(zgnep_main_ppt, 0, 3, 1, 1);

        ZGNEP_main_pushBtn_audio = new QPushButton(frame);
        ZGNEP_main_pushBtn_audio->setObjectName(QString::fromUtf8("ZGNEP_main_pushBtn_audio"));
        ZGNEP_main_pushBtn_audio->setFont(font2);
        ZGNEP_main_pushBtn_audio->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/main/src/icon/\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZGNEP_main_pushBtn_audio->setIcon(icon7);
        ZGNEP_main_pushBtn_audio->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(ZGNEP_main_pushBtn_audio, 1, 5, 1, 1);

        zgnep_main_photo = new QPushButton(frame);
        zgnep_main_photo->setObjectName(QString::fromUtf8("zgnep_main_photo"));
        zgnep_main_photo->setFocusPolicy(Qt::ClickFocus);
        zgnep_main_photo->setContextMenuPolicy(Qt::PreventContextMenu);
        zgnep_main_photo->setLayoutDirection(Qt::LeftToRight);
        zgnep_main_photo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/main/src/icon/\345\233\276\345\272\223.png"), QSize(), QIcon::Normal, QIcon::Off);
        zgnep_main_photo->setIcon(icon8);
        zgnep_main_photo->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(zgnep_main_photo, 0, 1, 1, 1);

        ZGNEP_main_pushBtn_file = new QPushButton(frame);
        ZGNEP_main_pushBtn_file->setObjectName(QString::fromUtf8("ZGNEP_main_pushBtn_file"));
        ZGNEP_main_pushBtn_file->setFont(font2);
        ZGNEP_main_pushBtn_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/main/src/icon/\346\226\207\344\273\266\347\263\273\347\273\237.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZGNEP_main_pushBtn_file->setIcon(icon9);
        ZGNEP_main_pushBtn_file->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(ZGNEP_main_pushBtn_file, 1, 1, 1, 1);

        ZGNEP_main_pushBtn_whiteBoard = new QPushButton(frame);
        ZGNEP_main_pushBtn_whiteBoard->setObjectName(QString::fromUtf8("ZGNEP_main_pushBtn_whiteBoard"));
        ZGNEP_main_pushBtn_whiteBoard->setFont(font2);
        ZGNEP_main_pushBtn_whiteBoard->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/main/src/icon/\347\231\275\346\235\277 .png"), QSize(), QIcon::Normal, QIcon::Off);
        ZGNEP_main_pushBtn_whiteBoard->setIcon(icon10);
        ZGNEP_main_pushBtn_whiteBoard->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(ZGNEP_main_pushBtn_whiteBoard, 1, 3, 1, 1);

        zgnep_main_word = new QPushButton(frame);
        zgnep_main_word->setObjectName(QString::fromUtf8("zgnep_main_word"));
        zgnep_main_word->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/main/src/icon/Word.png"), QSize(), QIcon::Normal, QIcon::Off);
        zgnep_main_word->setIcon(icon11);
        zgnep_main_word->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(zgnep_main_word, 0, 5, 1, 1);

        zgnep_main_course = new QPushButton(frame);
        zgnep_main_course->setObjectName(QString::fromUtf8("zgnep_main_course"));
        zgnep_main_course->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/main/src/icon/\350\257\276\347\250\213\350\241\250.png"), QSize(), QIcon::Normal, QIcon::Off);
        zgnep_main_course->setIcon(icon12);
        zgnep_main_course->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(zgnep_main_course, 0, 6, 1, 1);

        zgnep_main_calender = new QPushButton(frame);
        zgnep_main_calender->setObjectName(QString::fromUtf8("zgnep_main_calender"));
        zgnep_main_calender->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"    border: none; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: transparent; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\344\270\272\351\200\217\346\230\216 */\n"
"    padding: 0; /* \347\247\273\351\231\244\346\214\211\351\222\256\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QPushButton::icon {\n"
"    /* \350\256\276\347\275\256\345\233\276\346\240\207\345\241\253\345\205\205\346\225\264\344\270\252\346\214\211\351\222\256 */\n"
"    width: 100%; /* \345\233\276\346\240\207\345\256\275\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 100%; /* \345\233\276\346\240\207\351\253\230\345\272\246\345\215\240\346\215\256\346\225\264\344\270\252\346\214\211\351\222\256\351\253\230\345\272\246"
                        " */\n"
"    background-size: cover; /* \345\233\276\346\240\207\345\244\247\345\260\217\350\207\252\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/main/src/icon/\346\227\245\345\216\206.png"), QSize(), QIcon::Normal, QIcon::Off);
        zgnep_main_calender->setIcon(icon13);
        zgnep_main_calender->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(zgnep_main_calender, 1, 6, 1, 1);


        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);
        ZGNEP_Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ZGNEP_Main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1374, 28));
        ZGNEP_Main->setMenuBar(menubar);
        statusbar = new QStatusBar(ZGNEP_Main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ZGNEP_Main->setStatusBar(statusbar);
        toolBar = new QToolBar(ZGNEP_Main);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        ZGNEP_Main->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(ZGNEP_Main);

        zgnep_main_photo->setDefault(false);


        QMetaObject::connectSlotsByName(ZGNEP_Main);
    } // setupUi

    void retranslateUi(QMainWindow *ZGNEP_Main)
    {
        ZGNEP_Main->setWindowTitle(QApplication::translate("ZGNEP_Main", "ZGNEP_Main", nullptr));
        actionSetting->setText(QApplication::translate("ZGNEP_Main", "\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSetting->setToolTip(QApplication::translate("ZGNEP_Main", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        label_image->setText(QApplication::translate("ZGNEP_Main", "\345\244\264\345\203\217", nullptr));
        label_dateTime->setText(QApplication::translate("ZGNEP_Main", "\346\227\266\351\227\264\346\227\245\346\234\237", nullptr));
        label_state->setText(QApplication::translate("ZGNEP_Main", "\345\275\223\345\211\215\347\212\266\346\200\201:   \344\274\221\346\201\257", nullptr));
        zgenp_main_text->setText(QString());
        ZGNEP_main_pushBtn_setting->setText(QString());
        zgenp_main_calc->setText(QString());
        ZGNEP_main_pushBtn_video->setText(QString());
        ZGNEP_main_pushBtn_demonstrate->setText(QString());
        ZGNEP_main_pushBtn_transport->setText(QString());
        zgnep_main_ppt->setText(QString());
        ZGNEP_main_pushBtn_audio->setText(QString());
        zgnep_main_photo->setText(QString());
        ZGNEP_main_pushBtn_file->setText(QString());
        ZGNEP_main_pushBtn_whiteBoard->setText(QString());
        zgnep_main_word->setText(QString());
        zgnep_main_course->setText(QString());
        zgnep_main_calender->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("ZGNEP_Main", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZGNEP_Main: public Ui_ZGNEP_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_MAIN_H
