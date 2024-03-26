/********************************************************************************
** Form generated from reading UI file 'zgnep_userteacheradd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_USERTEACHERADD_H
#define UI_ZGNEP_USERTEACHERADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_zgnep_userTeacherAdd
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *pushButton;
    QFrame *frame_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QFrame *frame_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *zgnep_userTeacherAdd)
    {
        if (zgnep_userTeacherAdd->objectName().isEmpty())
            zgnep_userTeacherAdd->setObjectName(QString::fromUtf8("zgnep_userTeacherAdd"));
        zgnep_userTeacherAdd->resize(1460, 487);
        gridLayout = new QGridLayout(zgnep_userTeacherAdd);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(zgnep_userTeacherAdd);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 89, 25));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(zgnep_userTeacherAdd);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(60, 70, 431, 211));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(frame_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(frame_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout_2->addWidget(comboBox);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(650, 90, 385, 130));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout_3->addWidget(pushButton_2, 0, 0, 1, 1);

        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 11);

        retranslateUi(zgnep_userTeacherAdd);

        QMetaObject::connectSlotsByName(zgnep_userTeacherAdd);
    } // setupUi

    void retranslateUi(QDialog *zgnep_userTeacherAdd)
    {
        zgnep_userTeacherAdd->setWindowTitle(QApplication::translate("zgnep_userTeacherAdd", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("zgnep_userTeacherAdd", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("zgnep_userTeacherAdd", "\346\230\265\347\247\260", nullptr));
        label_2->setText(QApplication::translate("zgnep_userTeacherAdd", "\350\272\253\344\273\275", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_userTeacherAdd", "\346\267\273\345\212\240", nullptr));
        label_3->setText(QApplication::translate("zgnep_userTeacherAdd", "\346\263\250\346\204\217\357\274\232\345\210\235\345\247\213\345\257\206\347\240\201\344\270\272000000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_userTeacherAdd: public Ui_zgnep_userTeacherAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_USERTEACHERADD_H
