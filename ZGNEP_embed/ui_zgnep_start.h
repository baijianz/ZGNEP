/********************************************************************************
** Form generated from reading UI file 'zgnep_start.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_START_H
#define UI_ZGNEP_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZGNEP_start
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *ZGNEP_start)
    {
        if (ZGNEP_start->objectName().isEmpty())
            ZGNEP_start->setObjectName(QString::fromUtf8("ZGNEP_start"));
        ZGNEP_start->resize(936, 505);
        gridLayout = new QGridLayout(ZGNEP_start);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ZGNEP_start);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setPixmap(QPixmap(QString::fromUtf8(":/start/src/\345\274\200\346\234\272\347\224\273\351\235\242.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(ZGNEP_start);

        QMetaObject::connectSlotsByName(ZGNEP_start);
    } // setupUi

    void retranslateUi(QWidget *ZGNEP_start)
    {
        ZGNEP_start->setWindowTitle(QApplication::translate("ZGNEP_start", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ZGNEP_start: public Ui_ZGNEP_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_START_H
