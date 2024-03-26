#ifndef ZGNEP_ROTATINGLABEL_H
#define ZGNEP_ROTATINGLABEL_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QLabel>

class zgnep_rotatingLabel : public QLabel
{
    Q_OBJECT
public:
    explicit zgnep_rotatingLabel(QWidget *parent = nullptr);
    void setRotating(bool enabled);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    int angle;
    bool rotating;
    //bool  flag = false;
private slots:
    void updateRotation(void);
};
#endif // ZGNEP_ROTATINGLABEL_H
