#include "zgnep_pptlabel.h"
#include "zgnep_ppt.h"
#include <QEvent>
#include <QMouseEvent>
extern int pptIndex;
extern zgnep_pptLabel *pptPreCheck;
extern zgnep_pptLabel *pptCurCheck;
extern zgnep_ppt *pptMode;

QString pptLabelStyle = "zgnep_pptLabel { border: 5px solid red; }";
zgnep_pptLabel::zgnep_pptLabel(QWidget *parent, int index):QLabel(parent),index(index)
{
    this->setAlignment(Qt::AlignCenter);
    this->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    this->setContentsMargins(0,0,0,0);
    this->setScaledContents(true);
}

void zgnep_pptLabel::labelCheck(QWidget *parent, bool judge)
{
    zgnep_pptLabel* p = dynamic_cast<zgnep_pptLabel *>(parent);
    if(judge) p->setStyleSheet("border: 5px solid red;");
    else p->setStyleSheet("");
}

void zgnep_pptLabel::referish()
{
    if(pptPreCheck != nullptr) pptPreCheck->setStyleSheet("");
     pptCurCheck->setStyleSheet("border: 5px solid red;");
     pptPreCheck = pptCurCheck;

}

void zgnep_pptLabel::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        if(pptPreCheck != nullptr) pptPreCheck->setStyleSheet("");
        pptIndex = this->index;
        this->setStyleSheet("border: 5px solid red;");
        pptCurCheck = this;
        pptPreCheck = this;
        emit pptMode->indexChange();
    }
}
