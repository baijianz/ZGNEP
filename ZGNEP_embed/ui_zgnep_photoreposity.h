/********************************************************************************
** Form generated from reading UI file 'zgnep_photoreposity.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_PHOTOREPOSITY_H
#define UI_ZGNEP_PHOTOREPOSITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_photoReposity
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_Exit;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;

    void setupUi(QWidget *zgnep_photoReposity)
    {
        if (zgnep_photoReposity->objectName().isEmpty())
            zgnep_photoReposity->setObjectName(QString::fromUtf8("zgnep_photoReposity"));
        zgnep_photoReposity->resize(1442, 586);
        verticalLayout = new QVBoxLayout(zgnep_photoReposity);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(zgnep_photoReposity);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_Exit = new QPushButton(frame);
        btn_Exit->setObjectName(QString::fromUtf8("btn_Exit"));

        horizontalLayout->addWidget(btn_Exit);

        horizontalSpacer = new QSpacerItem(559, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(558, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame);

        scrollArea = new QScrollArea(zgnep_photoReposity);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1422, 509));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);

        retranslateUi(zgnep_photoReposity);

        QMetaObject::connectSlotsByName(zgnep_photoReposity);
    } // setupUi

    void retranslateUi(QWidget *zgnep_photoReposity)
    {
        zgnep_photoReposity->setWindowTitle(QApplication::translate("zgnep_photoReposity", "Form", nullptr));
        btn_Exit->setText(QApplication::translate("zgnep_photoReposity", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("zgnep_photoReposity", "zgnep_photoReposity \347\233\270\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_photoReposity: public Ui_zgnep_photoReposity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_PHOTOREPOSITY_H
