/********************************************************************************
** Form generated from reading UI file 'zgnep_covershow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_COVERSHOW_H
#define UI_ZGNEP_COVERSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_coverShow
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *zgnep_coverShow)
    {
        if (zgnep_coverShow->objectName().isEmpty())
            zgnep_coverShow->setObjectName(QString::fromUtf8("zgnep_coverShow"));
        zgnep_coverShow->resize(762, 413);
        gridLayout = new QGridLayout(zgnep_coverShow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(zgnep_coverShow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(zgnep_coverShow);

        QMetaObject::connectSlotsByName(zgnep_coverShow);
    } // setupUi

    void retranslateUi(QWidget *zgnep_coverShow)
    {
        zgnep_coverShow->setWindowTitle(QApplication::translate("zgnep_coverShow", "Form", nullptr));
        label->setText(QApplication::translate("zgnep_coverShow", "image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_coverShow: public Ui_zgnep_coverShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_COVERSHOW_H
