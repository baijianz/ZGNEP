#ifndef ZGNEP_PPT_H
#define ZGNEP_PPT_H

#include <QWidget>
#include <QDir>
class zgnep_pptLabel;
namespace Ui {
class zgnep_ppt;
}

class zgnep_ppt : public QWidget
{
    Q_OBJECT

public:
    explicit zgnep_ppt(QWidget *parent = nullptr, QString path = "./data/default/ppt/demo.ppt", QWidget *p = nullptr);
    ~zgnep_ppt();

private slots:
    void on_btn_exit_clicked();
    void on_indexChange();

    void on_btn_pre_clicked();

    void on_btn_next_clicked();

    void on_btn_openFile_clicked();

    void on_ppt_indexChanged();

    void on_scrollValueChanged(int value);

signals:
    void indexChange();
private:
    Ui::zgnep_ppt *ui;
    int ppt_index = 0;
    int ppt_count = 0;
    bool ConvertPDF(QString source, QString dest);
    void referish();
    QDir dir;
    QString path;
    void PPT_Load(QString path);
    QWidget *p;
    QVector<QImage> thumbnailImg;
    QVector<zgnep_pptLabel*> labels;

};

#endif // ZGNEP_PPT_H
