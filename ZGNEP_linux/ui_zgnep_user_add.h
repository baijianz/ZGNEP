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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_user_add
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *btnExit;
    QFrame *frame_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *cmBoxSubject;
    QLabel *label_3;
    QComboBox *cmboxTeacher;
    QPushButton *btn_confrim;

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
        btnExit = new QPushButton(frame);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(20, 10, 89, 25));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(zgnep_user_add);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(90, 80, 631, 291));
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

        btn_confrim = new QPushButton(frame_2);
        btn_confrim->setObjectName(QString::fromUtf8("btn_confrim"));
        btn_confrim->setGeometry(QRect(1020, 180, 171, 81));
        btn_confrim->setFont(font);

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
