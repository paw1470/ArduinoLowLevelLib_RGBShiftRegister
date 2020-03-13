#ifndef RGBSHIFTREGISTERPB_H
#define RGBSHIFTREGISTERPB_H

#include "ShiftRegisterPB.h"
#include <inttypes.h>
#include "Arduino.h"
#include "ColorsRGBEnum.h"
#include "RGBInterpreterInterfacePB.h"
#include "RGBInterpreterDefaultPB.h"

class RGBShiftRegisterPB{
    public:
        void init(uint8_t dataPin, uint8_t latchPin, uint8_t clockPin, RGBInterpreterInterfacePB colorInterpreter = new RGBInterpreterDefaultPB());
        void clearLed1();
        void clearLed2();
        void clearLed3();
        void clearAll();
        
        void setLed1(ColorsRGBEnum color);
        void setLed2(ColorsRGBEnum color);
        void setLed3(ColorsRGBEnum color);
        void setAll(ColorsRGBEnum color);

        ColorsRGBEnum getColorLed1();
        ColorsRGBEnum getColorLed2();
        ColorsRGBEnum getColorLed3();

        void update();
        void testLite();
        void testFull();
        void testColorAllLed(ColorsRGBEnum color);
    private:
        ShiftRegisterPB shiftRegister;
        RGBInterpreterInterfacePB *colorInterpreter;
        ColorsRGBEnum led1;
        ColorsRGBEnum led2;
        ColorsRGBEnum led3;
        void clear(byte data);
        void set(byte data);
};

#endif