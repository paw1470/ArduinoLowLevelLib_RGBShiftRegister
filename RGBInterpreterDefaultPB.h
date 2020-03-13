#ifndef RGBINTERPRETERDEFAULTPB_H
#define RGBINTERPRETERDEFAULTPB_H

#include "RGBInterpreterInterfacePB.h"
#include "cstddef"

class RGBInterpreterDefaultPB: public RGBInterpreterInterfacePB{
    public:
        byte getColorLed1(ColorsRGBEnum color);
        byte getColorLed2(ColorsRGBEnum color);
        byte getColorLed3(ColorsRGBEnum color);
};

#endif