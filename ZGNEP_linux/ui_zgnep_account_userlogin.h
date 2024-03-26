/********************************************************************************
** Form generated from reading UI file 'zgnep_account_userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_ACCOUNT_USERLOGIN_H
#define UI_ZGNEP_ACCOUNT_USERLOGIN_H

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

class Ui_zgnep_account_userLogin
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *zgnep_account_userLogin)
    {
        if (zgnep_account_userLogin->objectName().isEmpty())
            zgnep_account_userLogin->setObjectName(QString::fromUtf8("zgnep_account_userLogin"));
        zgnep_account_userLogin->resize(1122, 528);
        gridLayout = new QGridLayout(zgnep_account_userLogin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_8 = new QSpacerItem(253, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        label_3 = new QLabel(zgnep_account_userLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(40);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 7);

        horizontalSpacer_9 = new QSpacerItem(224, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 8, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(259, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(zgnep_account_userLogin);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(zgnep_account_userLogin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setPointSize(24);
        lineEdit->setFont(font1);

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 5);

        horizontalSpacer_3 = new QSpacerItem(230, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 7, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(259, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(zgnep_account_userLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(zgnep_account_userLogin);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 3, 2, 1, 5);

        horizontalSpacer_4 = new QSpacerItem(230, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 7, 1, 2);

        verticalSpacer = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 5, 0, 1, 3);

        pushButton = new QPushButton(zgnep_account_userLogin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/\350\277\224\345\233\236.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton, 5, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 5, 4, 1, 1);

        pushButton_2 = new QPushButton(zgnep_account_userLogin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/\347\231\273\345\275\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_2, 5, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(236, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 5, 6, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 75, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 75, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 5, 1, 1);


        retranslateUi(zgnep_account_userLogin);

        QMetaObject::connectSlotsByName(zgnep_account_userLogin);
    } // setupUi

    void retranslateUi(QDialog *zgnep_account_userLogin)
    {
        zgnep_account_userLogin->setWindowTitle(QApplication::translate("zgnep_account_userLogin", "Dialog", nullptr));
        label_3->setText(QApplication::translate("zgnep_account_userLogin", "\347\237\245\346\233\264\351\270\237\346\225\231\350\202\262\345\271\263\345\217\260_\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label->setText(QApplication::translate("zgnep_account_userLogin", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("zgnep_account_userLogin", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("zgnep_account_userLogin", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_account_userLogin", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_account_userLogin: public Ui_zgnep_account_userLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_ACCOUNT_USERLOGIN_H
