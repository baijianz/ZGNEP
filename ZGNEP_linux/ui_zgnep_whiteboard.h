/********************************************************************************
** Form generated from reading UI file 'zgnep_whiteboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGNEP_WHITEBOARD_H
#define UI_ZGNEP_WHITEBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zgnep_whiteBoard
{
public:
    QPushButton *btn_Color;
    QPushButton *btn_Save;
    QPushButton *btn_delete;
    QPushButton *btn_Exit;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *btn_StraightLine;
    QPushButton *btn_eraser;
    QPushButton *btn_round;
    QPushButton *btn_rectangle;
    QPushButton *btn_Pen;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cBox_size;
    QLabel *label_2;
    QComboBox *cBox_size_2;
    QLabel *label_3;
    QComboBox *cBox_eraeSize;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *label_model;
    QLabel *label_erasePic;

    void setupUi(QWidget *zgnep_whiteBoard)
    {
        if (zgnep_whiteBoard->objectName().isEmpty())
            zgnep_whiteBoard->setObjectName(QString::fromUtf8("zgnep_whiteBoard"));
        zgnep_whiteBoard->resize(1363, 452);
        btn_Color = new QPushButton(zgnep_whiteBoard);
        btn_Color->setObjectName(QString::fromUtf8("btn_Color"));
        btn_Color->setGeometry(QRect(520, 0, 25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/Color.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Color->setIcon(icon);
        btn_Color->setIconSize(QSize(20, 20));
        btn_Color->setCheckable(false);
        btn_Color->setAutoDefault(false);
        btn_Color->setFlat(true);
        btn_Save = new QPushButton(zgnep_whiteBoard);
        btn_Save->setObjectName(QString::fromUtf8("btn_Save"));
        btn_Save->setGeometry(QRect(30, 0, 25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Save->setIcon(icon1);
        btn_Save->setIconSize(QSize(20, 20));
        btn_Save->setCheckable(false);
        btn_Save->setAutoDefault(false);
        btn_Save->setFlat(true);
        btn_delete = new QPushButton(zgnep_whiteBoard);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setGeometry(QRect(60, 0, 25, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/src/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete->setIcon(icon2);
        btn_delete->setIconSize(QSize(25, 25));
        btn_delete->setCheckable(false);
        btn_delete->setAutoDefault(false);
        btn_delete->setFlat(true);
        btn_Exit = new QPushButton(zgnep_whiteBoard);
        btn_Exit->setObjectName(QString::fromUtf8("btn_Exit"));
        btn_Exit->setGeometry(QRect(0, 0, 25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/src/revocation-three.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Exit->setIcon(icon3);
        btn_Exit->setIconSize(QSize(20, 20));
        btn_Exit->setCheckable(false);
        btn_Exit->setAutoDefault(false);
        btn_Exit->setFlat(true);
        frame = new QFrame(zgnep_whiteBoard);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, -10, 398, 51));
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_StraightLine = new QPushButton(frame);
        btn_StraightLine->setObjectName(QString::fromUtf8("btn_StraightLine"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/src/Figure-Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_StraightLine->setIcon(icon4);
        btn_StraightLine->setIconSize(QSize(20, 20));
        btn_StraightLine->setCheckable(false);
        btn_StraightLine->setAutoDefault(false);
        btn_StraightLine->setFlat(true);

        gridLayout->addWidget(btn_StraightLine, 0, 2, 1, 1);

        btn_eraser = new QPushButton(frame);
        btn_eraser->setObjectName(QString::fromUtf8("btn_eraser"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/src/rubber.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_eraser->setIcon(icon5);
        btn_eraser->setIconSize(QSize(20, 20));
        btn_eraser->setCheckable(false);
        btn_eraser->setAutoDefault(false);
        btn_eraser->setFlat(true);

        gridLayout->addWidget(btn_eraser, 0, 1, 1, 1);

        btn_round = new QPushButton(frame);
        btn_round->setObjectName(QString::fromUtf8("btn_round"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/src/Figure-circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_round->setIcon(icon6);
        btn_round->setIconSize(QSize(20, 20));
        btn_round->setCheckable(false);
        btn_round->setAutoDefault(false);
        btn_round->setFlat(true);

        gridLayout->addWidget(btn_round, 0, 4, 1, 1);

        btn_rectangle = new QPushButton(frame);
        btn_rectangle->setObjectName(QString::fromUtf8("btn_rectangle"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/src/Figure-Rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_rectangle->setIcon(icon7);
        btn_rectangle->setIconSize(QSize(20, 20));
        btn_rectangle->setCheckable(false);
        btn_rectangle->setAutoDefault(false);
        btn_rectangle->setFlat(true);

        gridLayout->addWidget(btn_rectangle, 0, 3, 1, 1);

        btn_Pen = new QPushButton(frame);
        btn_Pen->setObjectName(QString::fromUtf8("btn_Pen"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/src/brush.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Pen->setIcon(icon8);
        btn_Pen->setIconSize(QSize(20, 20));
        btn_Pen->setCheckable(false);
        btn_Pen->setAutoDefault(false);
        btn_Pen->setFlat(true);

        gridLayout->addWidget(btn_Pen, 0, 0, 1, 1);

        layoutWidget = new QWidget(zgnep_whiteBoard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(545, 0, 516, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        cBox_size = new QComboBox(layoutWidget);
        cBox_size->addItem(QString());
        cBox_size->addItem(QString());
        cBox_size->addItem(QString());
        cBox_size->addItem(QString());
        cBox_size->addItem(QString());
        cBox_size->addItem(QString());
        cBox_size->addItem(QString());
        cBox_size->addItem(QString());
        cBox_size->addItem(QString());
        cBox_size->setObjectName(QString::fromUtf8("cBox_size"));
        cBox_size->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(cBox_size);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        cBox_size_2 = new QComboBox(layoutWidget);
        QIcon icon9;
        QString iconThemeName = QString::fromUtf8("111");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("E:/downloads/ch01"), QSize(), QIcon::Normal, QIcon::Off);
        }
        cBox_size_2->addItem(icon9, QString());
        cBox_size_2->addItem(QString());
        cBox_size_2->addItem(QString());
        cBox_size_2->addItem(QString());
        cBox_size_2->addItem(QString());
        cBox_size_2->setObjectName(QString::fromUtf8("cBox_size_2"));
        cBox_size_2->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(cBox_size_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("aakar"));
        font1.setPointSize(10);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        cBox_eraeSize = new QComboBox(layoutWidget);
        cBox_eraeSize->addItem(QString());
        cBox_eraeSize->addItem(QString());
        cBox_eraeSize->addItem(QString());
        cBox_eraeSize->setObjectName(QString::fromUtf8("cBox_eraeSize"));

        horizontalLayout->addWidget(cBox_eraeSize);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        label_model = new QLabel(layoutWidget);
        label_model->setObjectName(QString::fromUtf8("label_model"));

        horizontalLayout_2->addWidget(label_model);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label_erasePic = new QLabel(zgnep_whiteBoard);
        label_erasePic->setObjectName(QString::fromUtf8("label_erasePic"));
        label_erasePic->setGeometry(QRect(1070, 0, 411, 31));

        retranslateUi(zgnep_whiteBoard);

        btn_Color->setDefault(false);
        btn_Save->setDefault(false);
        btn_delete->setDefault(false);
        btn_Exit->setDefault(false);
        btn_StraightLine->setDefault(false);
        btn_eraser->setDefault(false);
        btn_round->setDefault(false);
        btn_rectangle->setDefault(false);
        btn_Pen->setDefault(false);


        QMetaObject::connectSlotsByName(zgnep_whiteBoard);
    } // setupUi

    void retranslateUi(QWidget *zgnep_whiteBoard)
    {
        zgnep_whiteBoard->setWindowTitle(QApplication::translate("zgnep_whiteBoard", "Form", nullptr));
        btn_Color->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Save->setToolTip(QApplication::translate("zgnep_whiteBoard", "\344\277\235\345\255\230", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Save->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_delete->setToolTip(QApplication::translate("zgnep_whiteBoard", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        btn_delete->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Exit->setToolTip(QApplication::translate("zgnep_whiteBoard", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Exit->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_StraightLine->setToolTip(QApplication::translate("zgnep_whiteBoard", "\346\267\273\345\212\240\347\233\264\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        btn_StraightLine->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_eraser->setToolTip(QApplication::translate("zgnep_whiteBoard", "\345\210\240\351\231\244", nullptr));
#endif // QT_NO_TOOLTIP
        btn_eraser->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_round->setToolTip(QApplication::translate("zgnep_whiteBoard", "\346\267\273\345\212\240\345\234\206\345\275\242", nullptr));
#endif // QT_NO_TOOLTIP
        btn_round->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_rectangle->setToolTip(QApplication::translate("zgnep_whiteBoard", "\346\267\273\345\212\240\347\237\251\345\275\242", nullptr));
#endif // QT_NO_TOOLTIP
        btn_rectangle->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_Pen->setToolTip(QApplication::translate("zgnep_whiteBoard", "\346\211\213\345\206\231", nullptr));
#endif // QT_NO_TOOLTIP
        btn_Pen->setText(QString());
        label->setText(QApplication::translate("zgnep_whiteBoard", "\347\254\224\345\260\226\347\262\227\347\273\206", nullptr));
        cBox_size->setItemText(0, QApplication::translate("zgnep_whiteBoard", "1", nullptr));
        cBox_size->setItemText(1, QApplication::translate("zgnep_whiteBoard", "2", nullptr));
        cBox_size->setItemText(2, QApplication::translate("zgnep_whiteBoard", "5", nullptr));
        cBox_size->setItemText(3, QApplication::translate("zgnep_whiteBoard", "8", nullptr));
        cBox_size->setItemText(4, QApplication::translate("zgnep_whiteBoard", "10", nullptr));
        cBox_size->setItemText(5, QApplication::translate("zgnep_whiteBoard", "15", nullptr));
        cBox_size->setItemText(6, QApplication::translate("zgnep_whiteBoard", "20", nullptr));
        cBox_size->setItemText(7, QApplication::translate("zgnep_whiteBoard", "45", nullptr));
        cBox_size->setItemText(8, QApplication::translate("zgnep_whiteBoard", "99", nullptr));

        label_2->setText(QApplication::translate("zgnep_whiteBoard", "\347\254\224\350\277\271", nullptr));
        cBox_size_2->setItemText(0, QApplication::translate("zgnep_whiteBoard", "\345\256\236\347\272\277", nullptr));
        cBox_size_2->setItemText(1, QApplication::translate("zgnep_whiteBoard", "\350\231\232\347\272\277", nullptr));
        cBox_size_2->setItemText(2, QApplication::translate("zgnep_whiteBoard", "\347\202\271", nullptr));
        cBox_size_2->setItemText(3, QApplication::translate("zgnep_whiteBoard", "\347\202\271\347\272\277", nullptr));
        cBox_size_2->setItemText(4, QApplication::translate("zgnep_whiteBoard", "\347\202\271\347\202\271\347\272\277", nullptr));

        label_3->setText(QApplication::translate("zgnep_whiteBoard", "\346\251\241\347\232\256\345\244\247\345\260\217", nullptr));
        cBox_eraeSize->setItemText(0, QApplication::translate("zgnep_whiteBoard", "\345\260\217", nullptr));
        cBox_eraeSize->setItemText(1, QApplication::translate("zgnep_whiteBoard", "\344\270\255", nullptr));
        cBox_eraeSize->setItemText(2, QApplication::translate("zgnep_whiteBoard", "\345\244\247", nullptr));

        label_4->setText(QApplication::translate("zgnep_whiteBoard", "\345\275\223\345\211\215\346\250\241\345\274\217\357\274\232", nullptr));
        label_model->setText(QApplication::translate("zgnep_whiteBoard", "\351\232\217\345\277\203\347\224\273", nullptr));
        label_erasePic->setText(QApplication::translate("zgnep_whiteBoard", "qebug::", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zgnep_whiteBoard: public Ui_zgnep_whiteBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGNEP_WHITEBOARD_H
