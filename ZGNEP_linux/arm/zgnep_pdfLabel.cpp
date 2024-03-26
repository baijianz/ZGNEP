#include "zgnep_pdfLabel.h"
#include <QLabel>
#include <QMouseEvent>
#include "zgnep_pdfview.h"

extern int PdfIndex;
extern zgnep_pdfLabel *preCheck;
extern zgnep_pdfLabel *curCheck;
extern zgnep_pdfView *mode;
QString labelStyle = "zgnep_pdfLabel { border: 5px solid blue; }";
zgnep_pdfLabel::zgnep_pdfLabel(QWidget *parent, int index) : QLabel(parent), index(index) {
    this->setAlignment(Qt::AlignCenter);
    this->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    this->setMinimumHeight(300);
    this->setContentsMargins(0,0,0,0);

}

void zgnep_pdfLabel::labelCheck(QWidget *parent, bool judge)
{
    auto p = dynamic_cast<zgnep_pdfLabel *>(parent);
    if(judge) p->setStyleSheet(labelStyle);
    else p->setStyleSheet("");
}

void zgnep_pdfLabel::mousePressEvent(QMouseEvent *event)
{

    if(event->button() == Qt::LeftButton)
    {
        if(preCheck != nullptr) preCheck->setStyleSheet("");
        PdfIndex = this->index;
        this->setStyleSheet(labelStyle);
        curCheck = this;
        preCheck = this;
        emit mode->indexChange();
    }

}


