/********************************************************************************
** Form generated from reading UI file 'zgnep_courseitemshow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_COURSEITEMSHOW_H
#define UI_ZGNEP_COURSEITEMSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_zgnep_courseItemShow
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QLabel *labelCourseID;
    QLabel *label_2;
    QLabel *label;
    QLabel *labelCourseName;
    QPushButton *pushButton;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QLabel *labelShowTime;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *labelTeacherID;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *labelTeacherImage;
    QLabel *label_teacherName;

    void setupUi(QDialog *zgnep_courseItemShow)
    {
        if (zgnep_courseItemShow->objectName().isEmpty())
            zgnep_courseItemShow->setObjectName(QString::fromUtf8("zgnep_courseItemShow"));
        zgnep_courseItemShow->resize(1395, 584);
        gridLayout = new QGridLayout(zgnep_courseItemShow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(zgnep_courseItemShow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelCourseID = new QLabel(frame);
        labelCourseID->setObjectName(QString::fromUtf8("labelCourseID"));
        labelCourseID->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelCourseID, 2, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        labelCourseName = new QLabel(frame);
        labelCourseName->setObjectName(QString::fromUtf8("labelCourseName"));
        labelCourseName->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelCourseName, 1, 1, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 4);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_3 = new QFrame(zgnep_courseItemShow);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelShowTime = new QLabel(frame_3);
        labelShowTime->setObjectName(QString::fromUtf8("labelShowTime"));
        labelShowTime->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelShowTime, 0, 0, 1, 1);


        gridLayout->addWidget(frame_3, 2, 0, 1, 2);

        frame_2 = new QFrame(zgnep_courseItemShow);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        labelTeacherID = new QLabel(frame_2);
        labelTeacherID->setObjectName(QString::fromUtf8("labelTeacherID"));
        labelTeacherID->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelTeacherID, 2, 1, 1, 1);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 2, 0, 1, 1);

        labelTeacherImage = new QLabel(frame_2);
        labelTeacherImage->setObjectName(QString::fromUtf8("labelTeacherImage"));
        labelTeacherImage->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelTeacherImage, 0, 1, 1, 1);

        label_teacherName = new QLabel(frame_2);
        label_teacherName->setObjectName(QString::fromUtf8("label_teacherName"));
        label_teacherName->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_teacherName, 1, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 1);

        gridLayout->addWidget(frame_2, 0, 1, 1, 1);


        retranslateUi(zgnep_courseItemShow);

        QMetaObject::connectSlotsByName(zgnep_courseItemShow);
    } // setupUi

    void retranslateUi(QDialog *zgnep_courseItemShow)
    {
        zgnep_courseItemShow->setWindowTitle(QApplication::translate("zgnep_courseItemShow", "Dialog", nullptr));
        labelCourseID->setText(QApplication::translate("zgnep_courseItemShow", "\345\206\205\345\256\271", nullptr));
        label_2->setText(QApplication::translate("zgnep_courseItemShow", "\350\257\276\347\250\213ID:", nullptr));
        label->setText(QApplication::translate("zgnep_courseItemShow", "\350\257\276\347\250\213\345\220\215\347\247\260:", nullptr));
        labelCourseName->setText(QApplication::translate("zgnep_courseItemShow", "\345\206\205\345\256\271", nullptr));
        pushButton->setText(QApplication::translate("zgnep_courseItemShow", "\345\205\263\351\227\255", nullptr));
        labelShowTime->setText(QApplication::translate("zgnep_courseItemShow", "\344\270\212\350\257\276\346\227\266\351\227\264", nullptr));
        label_4->setText(QApplication::translate("zgnep_courseItemShow", "\344\273\273\350\257\276\350\200\201\345\270\210:", nullptr));
        labelTeacherID->setText(QApplication::translate("zgnep_courseItemShow", "\345\206\205\345\256\271", nullptr));
        label_8->setText(QApplication::translate("zgnep_courseItemShow", "\350\200\201\345\270\210\346\230\265\347\247\260:", nullptr));
        label_9->setText(QApplication::translate("zgnep_courseItemShow", "\350\200\201\345\270\210ID:", nullptr));
        labelTeacherImage->setText(QApplication::translate("zgnep_courseItemShow", "\345\244\264\345\203\217", nullptr));
        label_teacherName->setText(QApplication::translate("zgnep_courseItemShow", "\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_courseItemShow: public Ui_zgnep_courseItemShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_COURSEITEMSHOW_H
