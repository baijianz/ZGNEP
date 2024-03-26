/********************************************************************************
** Form generated from reading UI file 'zgnep_course.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_COURSE_H
#define UI_ZGNEP_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_zgnep_course
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QPushButton *pushButton;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QDialog *zgnep_course)
    {
        if (zgnep_course->objectName().isEmpty())
            zgnep_course->setObjectName(QString::fromUtf8("zgnep_course"));
        zgnep_course->resize(1501, 571);
        verticalLayout = new QVBoxLayout(zgnep_course);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(zgnep_course);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 89, 25));
        pushButton->setStyleSheet(QString::fromUtf8("background:#16A085;color:#FFFFFF;border-radius:5px;"));

        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(zgnep_course);
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

        retranslateUi(zgnep_course);

        QMetaObject::connectSlotsByName(zgnep_course);
    } // setupUi

    void retranslateUi(QDialog *zgnep_course)
    {
        zgnep_course->setWindowTitle(QApplication::translate("zgnep_course", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("zgnep_course", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_course: public Ui_zgnep_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_COURSE_H
