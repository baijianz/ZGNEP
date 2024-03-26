/********************************************************************************
** Form generated from reading UI file 'zgnep_word.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_WORD_H
#define UI_ZGNEP_WORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_zgnep_word
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_exit;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_wordIndex;
    QLabel *label_2;
    QLabel *label_wordCount;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_open;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *zgnep_word)
    {
        if (zgnep_word->objectName().isEmpty())
            zgnep_word->setObjectName(QString::fromUtf8("zgnep_word"));
        zgnep_word->resize(1455, 581);
        verticalLayout = new QVBoxLayout(zgnep_word);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(zgnep_word);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_exit = new QPushButton(frame);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));

        horizontalLayout->addWidget(btn_exit);

        horizontalSpacer = new QSpacerItem(314, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_wordIndex = new QLabel(frame);
        label_wordIndex->setObjectName(QString::fromUtf8("label_wordIndex"));

        horizontalLayout->addWidget(label_wordIndex);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_wordCount = new QLabel(frame);
        label_wordCount->setObjectName(QString::fromUtf8("label_wordCount"));

        horizontalLayout->addWidget(label_wordCount);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_3 = new QSpacerItem(314, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_open = new QPushButton(frame);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));

        horizontalLayout->addWidget(btn_open);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(zgnep_word);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(frame_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1415, 484));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 11);

        retranslateUi(zgnep_word);

        QMetaObject::connectSlotsByName(zgnep_word);
    } // setupUi

    void retranslateUi(QWidget *zgnep_word)
    {
        zgnep_word->setWindowTitle(QApplication::translate("zgnep_word", "Form", nullptr));
        btn_exit->setText(QApplication::translate("zgnep_word", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("zgnep_word", "\345\275\223\345\211\215\351\241\265\347\240\201", nullptr));
        label_wordIndex->setText(QApplication::translate("zgnep_word", "0", nullptr));
        label_2->setText(QApplication::translate("zgnep_word", "/", nullptr));
        label_wordCount->setText(QApplication::translate("zgnep_word", "0", nullptr));
        label_3->setText(QApplication::translate("zgnep_word", "\347\274\251\346\224\276\345\244\247\345\260\217\357\274\232", nullptr));
        btn_open->setText(QApplication::translate("zgnep_word", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_word: public Ui_zgnep_word {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_WORD_H
