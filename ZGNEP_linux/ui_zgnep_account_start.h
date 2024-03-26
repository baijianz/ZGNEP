/********************************************************************************
** Form generated from reading UI file 'zgnep_account_start.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_ACCOUNT_START_H
#define UI_ZGNEP_ACCOUNT_START_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_zgnep_account_start
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *zgnep_account_start)
    {
        if (zgnep_account_start->objectName().isEmpty())
            zgnep_account_start->setObjectName(QString::fromUtf8("zgnep_account_start"));
        zgnep_account_start->resize(1264, 628);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zgnep_account_start->sizePolicy().hasHeightForWidth());
        zgnep_account_start->setSizePolicy(sizePolicy);
        zgnep_account_start->setContextMenuPolicy(Qt::DefaultContextMenu);
        zgnep_account_start->setLayoutDirection(Qt::LeftToRight);
        zgnep_account_start->setAutoFillBackground(true);
        zgnep_account_start->setStyleSheet(QString::fromUtf8("background-repeat: no-repeat;\n"
"background-position: center;\n"
" background-attachment: fixed; \n"
"background-size: cover;\n"
""));
        gridLayout = new QGridLayout(zgnep_account_start);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(zgnep_account_start);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 80));
        QFont font;
        font.setPointSize(24);
        pushButton_3->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/\345\205\263\346\234\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_3, 4, 1, 1, 1);

        label = new QLabel(zgnep_account_start);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(48);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(zgnep_account_start);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 80));
        pushButton_2->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/\347\256\241\347\220\206\345\221\230.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton = new QPushButton(zgnep_account_start);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 80));
        pushButton->setBaseSize(QSize(240, 160));
        pushButton->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/src/\347\224\250\346\210\267.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(60, 60));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 7);
        gridLayout->setColumnStretch(1, 3);

        retranslateUi(zgnep_account_start);

        QMetaObject::connectSlotsByName(zgnep_account_start);
    } // setupUi

    void retranslateUi(QDialog *zgnep_account_start)
    {
        zgnep_account_start->setWindowTitle(QApplication::translate("zgnep_account_start", "zgnep_account_start", nullptr));
        pushButton_3->setText(QApplication::translate("zgnep_account_start", "\345\205\263\346\234\272", nullptr));
        label->setText(QApplication::translate("zgnep_account_start", "\347\237\245\346\233\264\351\270\237\346\225\231\350\202\262\345\271\263\345\217\260", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_account_start", "\347\256\241\347\220\206\347\231\273\345\275\225", nullptr));
        pushButton->setText(QApplication::translate("zgnep_account_start", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_account_start: public Ui_zgnep_account_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_ACCOUNT_START_H
