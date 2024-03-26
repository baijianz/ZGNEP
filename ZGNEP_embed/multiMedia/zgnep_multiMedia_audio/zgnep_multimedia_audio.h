#ifndef ZGNEP_MULTIMEDIA_AUDIO_H
#define ZGNEP_MULTIMEDIA_AUDIO_H

#include "zgnep_audio.h"

class zgnep_multiMedia_audio : public zgnep_audio
{
public:
    zgnep_multiMedia_audio(QWidget *parent = nullptr, QString dir = "", QString file = "");
};

#endif // ZGNEP_MULTIMEDIA_AUDIO_H
