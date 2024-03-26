#ifndef ZGNEP_COVERSHOW_H
#define ZGNEP_COVERSHOW_H

#include <QWidget>
#include <QDialog>
#define COVER_PDF       "./cover/pdf.png"
#define COVER_PHOTO     "./cover/photo.png"
#define COVER_VIDEO     "./cover/video.png"
#define COVER_AUDIO     "./cover/audio_cover.png"
#define COVER_FILESYSTEM "./cover/fileSystem.png"
#define COVER_WHITEBOARD "./cover/WhiteBoard.png"
#define COVER_PPT         "./cover/ppt.png"
#define COVER_WORD        "./cover/word.png"
#define COVER_TEXT        "./cover/text.png"
#define COVER_SETTING      "./cover/setting.png"
#define COVER_CALC         "./cover/calc.png"
#define COVER_CALENDAR    "./cover/calendar.png"
#define COVER_COURSETABLE "./cover/courseTable.png"

namespace Ui {
class zgnep_coverShow;
}

class zgnep_coverShow : public QDialog
{
    Q_OBJECT

public:
    explicit zgnep_coverShow(QWidget *parent = nullptr, QString path = "");
    ~zgnep_coverShow();

private:
    Ui::zgnep_coverShow *ui;
};

#endif // ZGNEP_COVERSHOW_H
