#include "RGBShiftRegisterPB.h"

void RGBShiftRegisterPB::init(uint8_t dataPin, uint8_t latchPin, uint8_t clockPin, RGBInterpreterInterfacePB colorInterpreter){
    shiftRegister.init(dataPin, latchPin, clockPin);
    this->colorInterpreter = colorInterpreter;
}

void RGBShiftRegisterPB::clearLed1(){
    clear(colorInterpreter->getColorLed1(ALL));
}

void RGBShiftRegisterPB::clearLed2(){
    clear(colorInterpreter->getColorLed2(ALL));
}

void RGBShiftRegisterPB::clearLed3(){
    clear(colorInterpreter->getColorLed3(ALL));
}

void RGBShiftRegisterPB::clearAll(){
    clearLed1();
    clearLed2();
    clearLed3();
}

void RGBShiftRegisterPB::setLed1(ColorsRGBEnum color){
    led1 = color;
    clearLed1();
    set(colorInterpreter->getColorLed1(color));
}

void RGBShiftRegisterPB::setLed2(ColorsRGBEnum color){
    led2 = color;
    clearLed2();
    set(colorInterpreter->getColorLed2(color));
}

void RGBShiftRegisterPB::setLed3(ColorsRGBEnum color){
    led3 = color;
    clearLed3();
    set(colorInterpreter->getColorLed3(color));
}

void RGBShiftRegisterPB::setAll(ColorsRGBEnum color){
    setLed1(color);
    setLed2(color);
    setLed3(color);
}

void RGBShiftRegisterPB::update(){
    shiftRegister.update();
}

void RGBShiftRegisterPB::set(byte data){
    byte shiftData = shiftRegister.getDataByte();
    shiftData = shiftData | data;
    shiftRegister.setDataByte(shiftData);
}

void RGBShiftRegisterPB::clear(byte data){
    byte shiftData = shiftRegister.getDataByte();
    shiftData = shiftData & ~data;
    shiftRegister.setDataByte(shiftData);
}

void RGBShiftRegisterPB::testLite(){
    clearAll()
    update();

    setLed1(RED);
    update();
    delay(200);
    clearLed1();

    setLed2(RED);
    update();
    delay(200);
    clearLed2();

    setLed3(RED);
    update();
    delay(200);
    clearLed3();

    testColorAllLed(RED);

    testColorAllLed(GREEN);

    testColorAllLed(BLUE);
}

void RGBShiftRegisterPB::testFull(){
    testLite();
    
    testColorAllLed(YELLOW);
    
    testColorAllLed(MAGENTA);

    testColorAllLed(CYAN);

    testColorAllLed(WHITE);

    testColorAllLed(ALL);
}

void RGBShiftRegisterPB::testColorAllLed(ColorsRGBEnum color){
    setAll(color);
    update();
    delay(200);
}
