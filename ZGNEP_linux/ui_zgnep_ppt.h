/********************************************************************************
** Form generated from reading UI file 'zgnep_ppt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_PPT_H
#define UI_ZGNEP_PPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_ppt
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_exit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_index;
    QLabel *label_2;
    QLabel *label_3_count;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_openFile;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFrame *frame_4;
    QGridLayout *gridLayout_2;
    QLabel *label_image;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_pre;
    QPushButton *btn_next;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *zgnep_ppt)
    {
        if (zgnep_ppt->objectName().isEmpty())
            zgnep_ppt->setObjectName(QString::fromUtf8("zgnep_ppt"));
        zgnep_ppt->resize(1382, 628);
        verticalLayout = new QVBoxLayout(zgnep_ppt);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(zgnep_ppt);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_exit = new QPushButton(frame);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));

        horizontalLayout_2->addWidget(btn_exit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_index = new QLabel(frame_6);
        label_index->setObjectName(QString::fromUtf8("label_index"));

        horizontalLayout->addWidget(label_index);

        label_2 = new QLabel(frame_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3_count = new QLabel(frame_6);
        label_3_count->setObjectName(QString::fromUtf8("label_3_count"));

        horizontalLayout->addWidget(label_3_count);


        horizontalLayout_2->addWidget(frame_6);

        horizontalSpacer = new QSpacerItem(572, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_openFile = new QPushButton(frame);
        btn_openFile->setObjectName(QString::fromUtf8("btn_openFile"));

        horizontalLayout_2->addWidget(btn_openFile);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(zgnep_ppt);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(frame_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 103, 456));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        verticalLayout_3->addWidget(tabWidget);


        gridLayout->addWidget(frame_3, 0, 0, 1, 1);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        label_image = new QLabel(frame_4);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        sizePolicy.setHeightForWidth(label_image->sizePolicy().hasHeightForWidth());
        label_image->setSizePolicy(sizePolicy);
        label_image->setLayoutDirection(Qt::LeftToRight);
        label_image->setScaledContents(true);
        label_image->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_image, 0, 0, 1, 1);


        gridLayout->addWidget(frame_4, 0, 1, 1, 1);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 229, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        btn_pre = new QPushButton(frame_5);
        btn_pre->setObjectName(QString::fromUtf8("btn_pre"));

        verticalLayout_2->addWidget(btn_pre);

        btn_next = new QPushButton(frame_5);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));

        verticalLayout_2->addWidget(btn_next);

        verticalSpacer_4 = new QSpacerItem(20, 229, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        gridLayout->addWidget(frame_5, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 8);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 12);

        retranslateUi(zgnep_ppt);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(zgnep_ppt);
    } // setupUi

    void retranslateUi(QWidget *zgnep_ppt)
    {
        zgnep_ppt->setWindowTitle(QApplication::translate("zgnep_ppt", "Form", nullptr));
        btn_exit->setText(QApplication::translate("zgnep_ppt", "\351\200\200\345\207\272", nullptr));
        label_4->setText(QApplication::translate("zgnep_ppt", "\345\275\223\345\211\215\351\241\265\347\240\201\357\274\232", nullptr));
        label_index->setText(QApplication::translate("zgnep_ppt", "0", nullptr));
        label_2->setText(QApplication::translate("zgnep_ppt", "/", nullptr));
        label_3_count->setText(QApplication::translate("zgnep_ppt", "0", nullptr));
        btn_openFile->setText(QApplication::translate("zgnep_ppt", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("zgnep_ppt", "\347\274\251\347\225\245\345\233\276", nullptr));
        label_image->setText(QApplication::translate("zgnep_ppt", "\346\232\202\346\227\240\350\265\204\346\272\220", nullptr));
        btn_pre->setText(QApplication::translate("zgnep_ppt", "\344\270\212\344\270\200\351\241\265", nullptr));
        btn_next->setText(QApplication::translate("zgnep_ppt", "\344\270\213\344\270\200\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_ppt: public Ui_zgnep_ppt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_PPT_H
