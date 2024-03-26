/********************************************************************************
** Form generated from reading UI file 'zgnep_setting_datetime.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_SETTING_DATETIME_H
#define UI_ZGNEP_SETTING_DATETIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_setting_datetime
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *sbYear;
    QLabel *label;
    QSpinBox *sbMonth;
    QLabel *label_2;
    QSpinBox *sbDay;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *sbHour;
    QLabel *label_4;
    QSpinBox *sbMinute;
    QLabel *label_5;
    QSpinBox *sbSecond;
    QLabel *label_6;
    QPushButton *btn_confirm;
    QPushButton *btn_cancel;

    void setupUi(QWidget *zgnep_setting_datetime)
    {
        if (zgnep_setting_datetime->objectName().isEmpty())
            zgnep_setting_datetime->setObjectName(QString::fromUtf8("zgnep_setting_datetime"));
        zgnep_setting_datetime->resize(1076, 472);
        gridLayout_2 = new QGridLayout(zgnep_setting_datetime);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(zgnep_setting_datetime);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sbYear = new QSpinBox(frame);
        sbYear->setObjectName(QString::fromUtf8("sbYear"));
        QFont font;
        font.setPointSize(24);
        sbYear->setFont(font);
        sbYear->setAlignment(Qt::AlignCenter);
        sbYear->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(sbYear);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        sbMonth = new QSpinBox(frame);
        sbMonth->setObjectName(QString::fromUtf8("sbMonth"));
        sbMonth->setFont(font);
        sbMonth->setAlignment(Qt::AlignCenter);
        sbMonth->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(sbMonth);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        sbDay = new QSpinBox(frame);
        sbDay->setObjectName(QString::fromUtf8("sbDay"));
        sbDay->setFont(font);
        sbDay->setAlignment(Qt::AlignCenter);
        sbDay->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(sbDay);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sbHour = new QSpinBox(frame);
        sbHour->setObjectName(QString::fromUtf8("sbHour"));
        sbHour->setFont(font);
        sbHour->setAlignment(Qt::AlignCenter);
        sbHour->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_2->addWidget(sbHour);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        sbMinute = new QSpinBox(frame);
        sbMinute->setObjectName(QString::fromUtf8("sbMinute"));
        sbMinute->setFont(font);
        sbMinute->setAlignment(Qt::AlignCenter);
        sbMinute->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_2->addWidget(sbMinute);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        sbSecond = new QSpinBox(frame);
        sbSecond->setObjectName(QString::fromUtf8("sbSecond"));
        sbSecond->setFont(font);
        sbSecond->setAlignment(Qt::AlignCenter);
        sbSecond->setButtonSymbols(QAbstractSpinBox::NoButtons);
        sbSecond->setAccelerated(false);

        horizontalLayout_2->addWidget(sbSecond);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_6);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 2);

        btn_confirm = new QPushButton(zgnep_setting_datetime);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        QFont font1;
        font1.setPointSize(11);
        btn_confirm->setFont(font1);
        btn_confirm->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/confirm_normal.png); background-repeat: no-repeat;"));

        gridLayout_2->addWidget(btn_confirm, 1, 0, 1, 1);

        btn_cancel = new QPushButton(zgnep_setting_datetime);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setStyleSheet(QString::fromUtf8("border:0; background:transparent; background-image: url(:/src/cancel_normal.png); background-repeat: no-repeat;"));

        gridLayout_2->addWidget(btn_cancel, 1, 1, 1, 1);


        retranslateUi(zgnep_setting_datetime);

        QMetaObject::connectSlotsByName(zgnep_setting_datetime);
    } // setupUi

    void retranslateUi(QWidget *zgnep_setting_datetime)
    {
        zgnep_setting_datetime->setWindowTitle(QApplication::translate("zgnep_setting_datetime", "Form", nullptr));
        label->setText(QApplication::translate("zgnep_setting_datetime", "\345\271\264", nullptr));
        label_2->setText(QApplication::translate("zgnep_setting_datetime", "\346\234\210", nullptr));
        label_3->setText(QApplication::translate("zgnep_setting_datetime", "\346\227\245", nullptr));
        label_4->setText(QApplication::translate("zgnep_setting_datetime", "\346\227\266", nullptr));
        label_5->setText(QApplication::translate("zgnep_setting_datetime", "\345\210\206", nullptr));
        label_6->setText(QApplication::translate("zgnep_setting_datetime", "\347\247\222", nullptr));
        btn_confirm->setText(QApplication::translate("zgnep_setting_datetime", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QApplication::translate("zgnep_setting_datetime", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_setting_datetime: public Ui_zgnep_setting_datetime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_SETTING_DATETIME_H
