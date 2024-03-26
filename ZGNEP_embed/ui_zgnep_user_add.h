/********************************************************************************
** Form generated from reading UI file 'zgnep_user_add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_USER_ADD_H
#define UI_ZGNEP_USER_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_user_add
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnExit;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *cmBoxSubject;
    QLabel *label_3;
    QComboBox *cmboxTeacher;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_confrim;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *zgnep_user_add)
    {
        if (zgnep_user_add->objectName().isEmpty())
            zgnep_user_add->setObjectName(QString::fromUtf8("zgnep_user_add"));
        zgnep_user_add->resize(1458, 545);
        gridLayout = new QGridLayout(zgnep_user_add);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(zgnep_user_add);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnExit = new QPushButton(frame);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        horizontalLayout->addWidget(btnExit);

        horizontalSpacer_2 = new QSpacerItem(1331, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(zgnep_user_add);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 0, 4, 2, 1);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        cmBoxSubject = new QComboBox(frame_3);
        cmBoxSubject->setObjectName(QString::fromUtf8("cmBoxSubject"));
        cmBoxSubject->setFont(font);

        gridLayout_2->addWidget(cmBoxSubject, 0, 1, 1, 1);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        cmboxTeacher = new QComboBox(frame_3);
        cmboxTeacher->setObjectName(QString::fromUtf8("cmboxTeacher"));
        cmboxTeacher->setFont(font);

        gridLayout_2->addWidget(cmboxTeacher, 1, 1, 1, 1);


        gridLayout_3->addWidget(frame_3, 1, 1, 3, 2);

        horizontalSpacer = new QSpacerItem(326, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(327, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        btn_confrim = new QPushButton(frame_2);
        btn_confrim->setObjectName(QString::fromUtf8("btn_confrim"));
        btn_confrim->setFont(font);

        gridLayout_3->addWidget(btn_confrim, 2, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(326, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 2, 5, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 185, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 4, 2, 1);

        verticalSpacer = new QSpacerItem(20, 152, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 1, 1, 1);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 11);

        retranslateUi(zgnep_user_add);

        QMetaObject::connectSlotsByName(zgnep_user_add);
    } // setupUi

    void retranslateUi(QWidget *zgnep_user_add)
    {
        zgnep_user_add->setWindowTitle(QApplication::translate("zgnep_user_add", "Form", nullptr));
        btnExit->setText(QApplication::translate("zgnep_user_add", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("zgnep_user_add", "\346\267\273\345\212\240\347\232\204\347\247\221\347\233\256", nullptr));
        label_3->setText(QApplication::translate("zgnep_user_add", "\350\264\237\350\264\243\350\200\201\345\270\210", nullptr));
        btn_confrim->setText(QApplication::translate("zgnep_user_add", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_user_add: public Ui_zgnep_user_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_USER_ADD_H
