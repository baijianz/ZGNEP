#ifndef ZGNEP_PDFLABEL_H
#define ZGNEP_PDFLABEL_H

#include <QLabel>
#include <QMouseEvent>
#include <QDebug>

class zgnep_pdfLabel : public QLabel
{
    Q_OBJECT
public:
    zgnep_pdfLabel(QWidget *parent = nullptr, int index = -1);
    static void labelCheck(QWidget *parent, bool judge);
    int index;

protected:
    void mousePressEvent(QMouseEvent* event) override;
};

#endif // ZGNEP_PDFLABEL_H
