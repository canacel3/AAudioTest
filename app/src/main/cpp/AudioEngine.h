//
// Created by 西田楓 on 2022/03/14.
//

#ifndef AAUDIOTEST2_AUDIOENGINE_H
#define AAUDIOTEST2_AUDIOENGINE_H

#include <aaudio/AAudio.h>
#include "Oscillator.h"

class AudioEngine {
public:
    bool start();
    void stop();
    void restart();
    void setToneOn(bool isToneOn);

private:
    Oscillator oscillator_;
    AAudioStream *stream_;
};


#endif //AAUDIOTEST2_AUDIOENGINE_H
