/********************************************************************************
** Form generated from reading UI file 'zgnep_admin_course.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_ADMIN_COURSE_H
#define UI_ZGNEP_ADMIN_COURSE_H

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

class Ui_zgnep_admin_course
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

    void setupUi(QWidget *zgnep_admin_course)
    {
        if (zgnep_admin_course->objectName().isEmpty())
            zgnep_admin_course->setObjectName(QString::fromUtf8("zgnep_admin_course"));
        zgnep_admin_course->resize(1521, 552);
        verticalLayout = new QVBoxLayout(zgnep_admin_course);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(zgnep_admin_course);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(1308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(zgnep_admin_course);
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

        retranslateUi(zgnep_admin_course);

        QMetaObject::connectSlotsByName(zgnep_admin_course);
    } // setupUi

    void retranslateUi(QWidget *zgnep_admin_course)
    {
        zgnep_admin_course->setWindowTitle(QApplication::translate("zgnep_admin_course", "Form", nullptr));
        pushButton->setText(QApplication::translate("zgnep_admin_course", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QApplication::translate("zgnep_admin_course", "\346\226\260\345\242\236\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_admin_course: public Ui_zgnep_admin_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_ADMIN_COURSE_H
