/********************************************************************************
** Form generated from reading UI file 'zgnep_admin_usermanange.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_ADMIN_USERMANANGE_H
#define UI_ZGNEP_ADMIN_USERMANANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_admin_userManange
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QWidget *zgnep_admin_userManange)
    {
        if (zgnep_admin_userManange->objectName().isEmpty())
            zgnep_admin_userManange->setObjectName(QString::fromUtf8("zgnep_admin_userManange"));
        zgnep_admin_userManange->resize(1324, 541);
        verticalLayout = new QVBoxLayout(zgnep_admin_userManange);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(zgnep_admin_userManange);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(1111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(zgnep_admin_userManange);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(frame_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 11);

        retranslateUi(zgnep_admin_userManange);

        QMetaObject::connectSlotsByName(zgnep_admin_userManange);
    } // setupUi

    void retranslateUi(QWidget *zgnep_admin_userManange)
    {
        zgnep_admin_userManange->setWindowTitle(QApplication::translate("zgnep_admin_userManange", "Form", nullptr));
        pushButton->setText(QApplication::translate("zgnep_admin_userManange", "\351\200\200\345\207\272", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_admin_userManange", "\346\226\260\345\242\236\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_admin_userManange: public Ui_zgnep_admin_userManange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_ADMIN_USERMANANGE_H
