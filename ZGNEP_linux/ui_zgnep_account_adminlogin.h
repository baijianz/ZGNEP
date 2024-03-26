/********************************************************************************
** Form generated from reading UI file 'zgnep_account_adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_ACCOUNT_ADMINLOGIN_H
#define UI_ZGNEP_ACCOUNT_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_zgnep_account_adminLogin
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_3;

    void setupUi(QDialog *zgnep_account_adminLogin)
    {
        if (zgnep_account_adminLogin->objectName().isEmpty())
            zgnep_account_adminLogin->setObjectName(QString::fromUtf8("zgnep_account_adminLogin"));
        zgnep_account_adminLogin->resize(1187, 523);
        gridLayout = new QGridLayout(zgnep_account_adminLogin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 6, 2, 1);

        pushButton = new QPushButton(zgnep_account_adminLogin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(24);
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/\350\277\224\345\233\236.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton, 8, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 8, 5, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(zgnep_account_adminLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(zgnep_account_adminLogin);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 5);

        verticalSpacer_2 = new QSpacerItem(20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 0, 2, 1);

        horizontalSpacer_5 = new QSpacerItem(659, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 8, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 0, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(zgnep_account_adminLogin);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(zgnep_account_adminLogin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 5);

        pushButton_2 = new QPushButton(zgnep_account_adminLogin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/\347\231\273\345\275\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_2, 8, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 9, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 7, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 0, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 9, 2, 1, 1);

        label_3 = new QLabel(zgnep_account_adminLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(40);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 3, 1, 1);


        retranslateUi(zgnep_account_adminLogin);

        QMetaObject::connectSlotsByName(zgnep_account_adminLogin);
    } // setupUi

    void retranslateUi(QDialog *zgnep_account_adminLogin)
    {
        zgnep_account_adminLogin->setWindowTitle(QApplication::translate("zgnep_account_adminLogin", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("zgnep_account_adminLogin", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QApplication::translate("zgnep_account_adminLogin", "\345\257\206\347\240\201\357\274\232", nullptr));
        label->setText(QApplication::translate("zgnep_account_adminLogin", "\350\264\246\345\217\267\357\274\232", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_account_adminLogin", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QApplication::translate("zgnep_account_adminLogin", "\347\237\245\346\233\264\351\270\237\346\225\231\350\202\262\345\271\263\345\217\260_\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_account_adminLogin: public Ui_zgnep_account_adminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_ACCOUNT_ADMINLOGIN_H
