/********************************************************************************
** Form generated from reading UI file 'zgnep_photoviewer_embed.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_PHOTOVIEWER_EMBED_H
#define UI_ZGNEP_PHOTOVIEWER_EMBED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_zgnep_photoViewer_Embed
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;

    void setupUi(QDialog *zgnep_photoViewer_Embed)
    {
        if (zgnep_photoViewer_Embed->objectName().isEmpty())
            zgnep_photoViewer_Embed->setObjectName(QString::fromUtf8("zgnep_photoViewer_Embed"));
        zgnep_photoViewer_Embed->resize(1350, 525);
        gridLayout = new QGridLayout(zgnep_photoViewer_Embed);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(zgnep_photoViewer_Embed);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(1223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(zgnep_photoViewer_Embed);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 11);

        retranslateUi(zgnep_photoViewer_Embed);

        QMetaObject::connectSlotsByName(zgnep_photoViewer_Embed);
    } // setupUi

    void retranslateUi(QDialog *zgnep_photoViewer_Embed)
    {
        zgnep_photoViewer_Embed->setWindowTitle(QApplication::translate("zgnep_photoViewer_Embed", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("zgnep_photoViewer_Embed", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_photoViewer_Embed: public Ui_zgnep_photoViewer_Embed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_PHOTOVIEWER_EMBED_H
