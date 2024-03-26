#ifndef ZGNEP_PPTLABEL_H
#define ZGNEP_PPTLABEL_H
#include <QLabel>

class zgnep_pptLabel:public QLabel
{
public:
    zgnep_pptLabel(QWidget *parent = nullptr, int index = -1);

    static void labelCheck(QWidget *parent, bool judge);

    static void referish();
protected:
    void mousePressEvent(QMouseEvent *ev) override;
private:
    int index;
};

#endif // ZGNEP_PPTLABEL_H
