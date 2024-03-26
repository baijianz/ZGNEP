/********************************************************************************
** Form generated from reading UI file 'zgnep_calendar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_CALENDAR_H
#define UI_ZGNEP_CALENDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_zgnep_calendar
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QPushButton *pushButton;
    QFrame *frame_2;

    void setupUi(QDialog *zgnep_calendar)
    {
        if (zgnep_calendar->objectName().isEmpty())
            zgnep_calendar->setObjectName(QString::fromUtf8("zgnep_calendar"));
        zgnep_calendar->resize(1190, 533);
        verticalLayout = new QVBoxLayout(zgnep_calendar);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(zgnep_calendar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 89, 25));
        pushButton->setStyleSheet(QString::fromUtf8("background:#16A085;color:#FFFFFF;border-radius:5px;"));

        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(zgnep_calendar);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 11);

        retranslateUi(zgnep_calendar);

        QMetaObject::connectSlotsByName(zgnep_calendar);
    } // setupUi

    void retranslateUi(QDialog *zgnep_calendar)
    {
        zgnep_calendar->setWindowTitle(QApplication::translate("zgnep_calendar", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("zgnep_calendar", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_calendar: public Ui_zgnep_calendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_CALENDAR_H
