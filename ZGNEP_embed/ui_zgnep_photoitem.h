/********************************************************************************
** Form generated from reading UI file 'zgnep_photoitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_PHOTOITEM_H
#define UI_ZGNEP_PHOTOITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_photoItem
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label_image;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_file;

    void setupUi(QWidget *zgnep_photoItem)
    {
        if (zgnep_photoItem->objectName().isEmpty())
            zgnep_photoItem->setObjectName(QString::fromUtf8("zgnep_photoItem"));
        zgnep_photoItem->resize(284, 300);
        gridLayout = new QGridLayout(zgnep_photoItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(zgnep_photoItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_image = new QLabel(frame);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_image, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(zgnep_photoItem);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_file = new QLabel(frame_2);
        label_file->setObjectName(QString::fromUtf8("label_file"));
        label_file->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_file, 0, 0, 1, 1);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 5);

        retranslateUi(zgnep_photoItem);

        QMetaObject::connectSlotsByName(zgnep_photoItem);
    } // setupUi

    void retranslateUi(QWidget *zgnep_photoItem)
    {
        zgnep_photoItem->setWindowTitle(QApplication::translate("zgnep_photoItem", "Form", nullptr));
        label_image->setText(QApplication::translate("zgnep_photoItem", "imageItem", nullptr));
        label_file->setText(QApplication::translate("zgnep_photoItem", "fileName", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_photoItem: public Ui_zgnep_photoItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_PHOTOITEM_H
