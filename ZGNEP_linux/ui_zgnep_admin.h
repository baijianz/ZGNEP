/********************************************************************************
** Form generated from reading UI file 'zgnep_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_ADMIN_H
#define UI_ZGNEP_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_admin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btnUserManger;
    QPushButton *btnCourseSetting;
    QPushButton *btnExit;
    QPushButton *btnRelated;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *zgnep_admin)
    {
        if (zgnep_admin->objectName().isEmpty())
            zgnep_admin->setObjectName(QString::fromUtf8("zgnep_admin"));
        zgnep_admin->resize(1202, 575);
        QFont font;
        font.setPointSize(16);
        zgnep_admin->setFont(font);
        centralwidget = new QWidget(zgnep_admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnUserManger = new QPushButton(centralwidget);
        btnUserManger->setObjectName(QString::fromUtf8("btnUserManger"));
        QFont font1;
        font1.setPointSize(24);
        btnUserManger->setFont(font1);

        gridLayout->addWidget(btnUserManger, 0, 0, 1, 1);

        btnCourseSetting = new QPushButton(centralwidget);
        btnCourseSetting->setObjectName(QString::fromUtf8("btnCourseSetting"));
        btnCourseSetting->setFont(font1);

        gridLayout->addWidget(btnCourseSetting, 0, 1, 1, 1);

        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setFont(font1);

        gridLayout->addWidget(btnExit, 1, 0, 1, 1);

        btnRelated = new QPushButton(centralwidget);
        btnRelated->setObjectName(QString::fromUtf8("btnRelated"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnRelated->sizePolicy().hasHeightForWidth());
        btnRelated->setSizePolicy(sizePolicy);
        btnRelated->setFont(font1);

        gridLayout->addWidget(btnRelated, 1, 1, 1, 1);

        zgnep_admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(zgnep_admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1202, 37));
        zgnep_admin->setMenuBar(menubar);
        statusbar = new QStatusBar(zgnep_admin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        zgnep_admin->setStatusBar(statusbar);

        retranslateUi(zgnep_admin);

        QMetaObject::connectSlotsByName(zgnep_admin);
    } // setupUi

    void retranslateUi(QMainWindow *zgnep_admin)
    {
        zgnep_admin->setWindowTitle(QApplication::translate("zgnep_admin", "MainWindow", nullptr));
        btnUserManger->setText(QApplication::translate("zgnep_admin", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btnCourseSetting->setText(QApplication::translate("zgnep_admin", "\350\257\276\347\250\213\347\256\241\347\220\206", nullptr));
        btnExit->setText(QApplication::translate("zgnep_admin", "\351\200\200\345\207\272", nullptr));
        btnRelated->setText(QApplication::translate("zgnep_admin", "\350\257\276\347\250\213\346\227\266\351\227\264\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_admin: public Ui_zgnep_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_ADMIN_H
