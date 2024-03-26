#ifndef ZGNEP_PDFVIEW_H
#define ZGNEP_PDFVIEW_H

#include <QWidget>
class QPdfium;
class pthread;
class zgnep_pdfLabel;
#define ZGNEP_MIN(a, b) ((a) > (b) ? (b) : (a))
#define ZGNEP_MAX(a, b) ((a) > (b) ? (a) : (b))


namespace Ui {
class zgnep_pdfView;
}

class zgnep_pdfView : public QWidget
{
    Q_OBJECT

public:
    void PdfShowPage(QPdfium *Pdf, int pageCount, int PageIndex);
    explicit zgnep_pdfView(QWidget *parent = nullptr, QString basePath = "./data/default/pdf/", QString fileName = "");
    ~zgnep_pdfView();
    static bool pthreadFlag;
private slots:

    void on_btn_exit_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_scrollBar_valueChange(int value);

    void on_pdfIndexChange(void);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btn_open_clicked();

    void on_btn_jump_clicked();

protected:
    void wheelEvent(QWheelEvent *event) override;

private:
    Ui::zgnep_pdfView *ui;
    QString PdfPath = "";
    QString PdfBasePath = "";
    void pdf_load(QString path);
    static void *pdfShow_proc(void *arg);
    QVector<QImage> thumbnailImg;
    int PdfPage;
    int Pdfsize = 2;
    pthread_t p;
    QVector<zgnep_pdfLabel*> labels;
    int pageScollItem = 0;
    void  refresh();
signals:
   void indexChange();
};

#endif // ZGNEP_PDFVIEW_H
