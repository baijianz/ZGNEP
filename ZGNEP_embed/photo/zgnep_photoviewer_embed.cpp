#include "zgnep_photoviewer_embed.h"
#include "ui_zgnep_photoviewer_embed.h"
#include <QBoxLayout>
#include "zgnep_photoviewer.h"
#include <QFrame>
zgnep_photoViewer_Embed::zgnep_photoViewer_Embed(QWidget *parent, QString path) :
    QDialog(parent),
    ui(new Ui::zgnep_photoViewer_Embed)
{
    ui->setupUi(this);
    QVBoxLayout *v = new  QVBoxLayout();
    zgnep_photoViewer *m = new zgnep_photoViewer(parent, path);
    v->addWidget(m);
    this->setFixedSize(800,550);
    ui->frame_2->setLayout(v);

}

zgnep_photoViewer_Embed::~zgnep_photoViewer_Embed()
{
    delete ui;
}

void zgnep_photoViewer_Embed::on_pushButton_clicked()
{
    this->close();
}
