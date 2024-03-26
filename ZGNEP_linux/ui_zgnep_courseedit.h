/********************************************************************************
** Form generated from reading UI file 'zgnep_courseedit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_COURSEEDIT_H
#define UI_ZGNEP_COURSEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_courseEdit
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QTableView *tableView;

    void setupUi(QWidget *zgnep_courseEdit)
    {
        if (zgnep_courseEdit->objectName().isEmpty())
            zgnep_courseEdit->setObjectName(QString::fromUtf8("zgnep_courseEdit"));
        zgnep_courseEdit->resize(1412, 495);
        gridLayout = new QGridLayout(zgnep_courseEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(zgnep_courseEdit);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background:#16A085;color:#FFFFFF;border-radius:5px;"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(1199, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:#16A085;color:#FFFFFF;border-radius:5px;"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(zgnep_courseEdit);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView = new QTableView(frame_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 11);

        retranslateUi(zgnep_courseEdit);

        QMetaObject::connectSlotsByName(zgnep_courseEdit);
    } // setupUi

    void retranslateUi(QWidget *zgnep_courseEdit)
    {
        zgnep_courseEdit->setWindowTitle(QApplication::translate("zgnep_courseEdit", "Form", nullptr));
        pushButton->setText(QApplication::translate("zgnep_courseEdit", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_courseEdit", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_courseEdit: public Ui_zgnep_courseEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_COURSEEDIT_H
