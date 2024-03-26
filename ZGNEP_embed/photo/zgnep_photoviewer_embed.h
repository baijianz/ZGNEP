#ifndef ZGNEP_PHOTOVIEWER_EMBED_H
#define ZGNEP_PHOTOVIEWER_EMBED_H

#include <QDialog>

namespace Ui {
class zgnep_photoViewer_Embed;
}

class zgnep_photoViewer_Embed : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_photoViewer_Embed(QWidget *parent = nullptr, QString path = "");
    ~zgnep_photoViewer_Embed();

private slots:
    void on_pushButton_clicked();

private:
    Ui::zgnep_photoViewer_Embed *ui;
};

#endif // ZGNEP_PHOTOVIEWER_EMBED_H
