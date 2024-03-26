/********************************************************************************
** Form generated from reading UI file 'zgnep_pdfview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_PDFVIEW_H
#define UI_ZGNEP_PDFVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_pdfView
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QLabel *labelPage;
    QLineEdit *lineEdit;
    QPushButton *btn_exit;
    QLabel *labelIndex;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_debug;
    QPushButton *btn_open;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *btn_jump;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_tips;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_pdf;
    QScrollBar *verticalScrollBar;

    void setupUi(QWidget *zgnep_pdfView)
    {
        if (zgnep_pdfView->objectName().isEmpty())
            zgnep_pdfView->setObjectName(QString::fromUtf8("zgnep_pdfView"));
        zgnep_pdfView->resize(1356, 671);
        verticalLayout = new QVBoxLayout(zgnep_pdfView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(zgnep_pdfView);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        labelPage = new QLabel(frame);
        labelPage->setObjectName(QString::fromUtf8("labelPage"));

        gridLayout_4->addWidget(labelPage, 0, 6, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 0, 10, 1, 1);

        btn_exit = new QPushButton(frame);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));

        gridLayout_4->addWidget(btn_exit, 0, 0, 1, 1);

        labelIndex = new QLabel(frame);
        labelIndex->setObjectName(QString::fromUtf8("labelIndex"));

        gridLayout_4->addWidget(labelIndex, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 7, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 12, 1, 1);

        label_debug = new QLabel(frame);
        label_debug->setObjectName(QString::fromUtf8("label_debug"));

        gridLayout_4->addWidget(label_debug, 0, 8, 1, 1);

        btn_open = new QPushButton(frame);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));

        gridLayout_4->addWidget(btn_open, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout_4->addLayout(horizontalLayout, 0, 15, 1, 1);

        btn_jump = new QPushButton(frame);
        btn_jump->setObjectName(QString::fromUtf8("btn_jump"));

        gridLayout_4->addWidget(btn_jump, 0, 11, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_4->addWidget(pushButton, 0, 13, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 5, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_4->addWidget(pushButton_2, 0, 14, 1, 1);

        label_tips = new QLabel(frame);
        label_tips->setObjectName(QString::fromUtf8("label_tips"));

        gridLayout_4->addWidget(label_tips, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 9, 1, 1);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(zgnep_pdfView);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(frame_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea_2 = new QScrollArea(tab);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 563, 525));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(scrollArea_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        splitter->addWidget(tabWidget);
        scrollArea = new QScrollArea(splitter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 725, 574));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_pdf = new QLabel(scrollAreaWidgetContents);
        label_pdf->setObjectName(QString::fromUtf8("label_pdf"));
        label_pdf->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pdf, 0, 0, 1, 1);

        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalScrollBar, 0, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(scrollArea);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(1, 12);

        retranslateUi(zgnep_pdfView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(zgnep_pdfView);
    } // setupUi

    void retranslateUi(QWidget *zgnep_pdfView)
    {
        zgnep_pdfView->setWindowTitle(QApplication::translate("zgnep_pdfView", "Form", nullptr));
        labelPage->setText(QApplication::translate("zgnep_pdfView", "0", nullptr));
        btn_exit->setText(QApplication::translate("zgnep_pdfView", "\351\200\200\345\207\272", nullptr));
        labelIndex->setText(QApplication::translate("zgnep_pdfView", "0", nullptr));
        label_debug->setText(QApplication::translate("zgnep_pdfView", "debug\357\274\232", nullptr));
        btn_open->setText(QApplication::translate("zgnep_pdfView", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("zgnep_pdfView", "\347\274\251\346\224\276\346\257\224\344\276\213", nullptr));
        comboBox->setItemText(0, QApplication::translate("zgnep_pdfView", "50%", nullptr));
        comboBox->setItemText(1, QApplication::translate("zgnep_pdfView", "100%", nullptr));
        comboBox->setItemText(2, QApplication::translate("zgnep_pdfView", "200%", nullptr));
        comboBox->setItemText(3, QApplication::translate("zgnep_pdfView", "400%", nullptr));

        btn_jump->setText(QApplication::translate("zgnep_pdfView", "\350\267\263\350\275\254", nullptr));
        pushButton->setText(QApplication::translate("zgnep_pdfView", "\344\270\212\344\270\200\351\241\265", nullptr));
        label_4->setText(QApplication::translate("zgnep_pdfView", "/", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_pdfView", "\344\270\213\344\270\200\351\241\265", nullptr));
        label_tips->setText(QApplication::translate("zgnep_pdfView", "\345\275\223\345\211\215\351\241\265\347\240\201\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("zgnep_pdfView", "\347\274\251\347\225\245\345\233\276", nullptr));
        label_pdf->setText(QApplication::translate("zgnep_pdfView", "pdfDispiay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_pdfView: public Ui_zgnep_pdfView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_PDFVIEW_H
