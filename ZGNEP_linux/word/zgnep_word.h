#ifndef ZGNEP_WORD_H
#define ZGNEP_WORD_H

#include <QWidget>
#include <QDir>
namespace Ui {
class zgnep_word;
}

class zgnep_word : public QWidget
{
    Q_OBJECT

public:
    explicit zgnep_word(QWidget *parent = nullptr, QString path = "", QWidget *p = nullptr);
    ~zgnep_word();
    void word_Load(QString path);
    bool convertPDF(QString path, QString file);
    void referish();

private slots:
    void on_comboxIndexChanged(int index);
    void on_btn_exit_clicked();
    void on_indexChange();
    void onVerbarValueChanged();
    void on_btn_open_clicked();


signals:
    void indexChange();

private:
    Ui::zgnep_word *ui;
    QString path;
    QDir dir;
    int WordIndex = 0;
    int WordCount = 0;
    int WordSize = 2;
    QWidget *p;

};

#endif // ZGNEP_WORD_H
