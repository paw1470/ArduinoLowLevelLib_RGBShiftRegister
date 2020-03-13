#ifndef RGBINTERPRETERINTERFACEPB_H
#define RGBINTERPRETERINTERFACEPB_H

#include "ColorsRGBEnum.h"
#include "cstddef"

class RGBInterpreterInterfacePB{
    public:
        virtual byte getColorLed1(ColorsRGBEnum color) = 0;
        virtual byte getColorLed2(ColorsRGBEnum color) = 0;
        virtual byte getColorLed3(ColorsRGBEnum color) = 0;
};

#endif