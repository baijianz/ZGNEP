#include "zgnep_photoitem.h"
#include "ui_zgnep_photoitem.h"
#include <QFile>
#include "./photo/zgnep_photoviewer.h"
#include "./photo/zgnep_photoreposity.h"

extern QSize zgenp_photoReposity_size;
extern zgnep_photoReposity *model;
zgnep_photoItem::zgnep_photoItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zgnep_photoItem)
{
    ui->setupUi(this);
}

zgnep_photoItem::zgnep_photoItem(QWidget *parent, QString path):
    QWidget(parent),
    ui(new Ui::zgnep_photoItem)
{
    ui->setupUi(this);
    ImagePath = path;

    // 设置Label的大小策略为自动调整大小
    ui->label_image->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
    // 设置Label的缩放模式为按比例缩放，这样Pixmap将自动适应Label的大小
    ui->label_image->setScaledContents(true);
    QFile file(path);
    if(file.exists())
    {
        QPixmap photo(path);
        ui->label_image->setPixmap(photo);
        QList<QString> list = path.split('/');
        ui->label_file->setText(list.back());
    }
    this->setFixedHeight(320);
    //ui->label_image->adjustSize();
}

zgnep_photoItem::~zgnep_photoItem()
{
    delete ui;
}

void zgnep_photoItem::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        emit model->on_photo_show(ImagePath);
    }
}

void zgnep_photoItem::on_pushButton_clicked()
{

}


