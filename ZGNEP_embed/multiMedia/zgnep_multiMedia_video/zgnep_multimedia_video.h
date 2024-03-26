#ifndef ZGNEP_MULTIMEDIA_VIDEO_H
#define ZGNEP_MULTIMEDIA_VIDEO_H

#include "zgnep_video.h"

class zgnep_multiMedia_video : public zgnep_video
{
public:
    zgnep_multiMedia_video(QWidget *parent = nullptr, QString dir = "", QString path = "");
};

#endif // ZGNEP_MULTIMEDIA_VIDEO_H
