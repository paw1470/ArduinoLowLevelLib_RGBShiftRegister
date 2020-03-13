#include "RGBInterpreterDefaultPB.h"
#include "ColorsRGBShiftRegisterDefault.h"

byte RGBInterpreterDefaultPB::getColorLed1(ColorsRGBEnum color){
    switch (color){
    case RED:
    case RED_BLINK_ON:
        return LED_1_RED;
    case GREEN:    
    case GREEN_BLINK_ON:   
        return LED_1_GREEN;
    case BLUE:
    case BLUE_BLINK_ON:
        return LED_1_BLUE;
    case CYAN:
    case CYAN_BLINK_ON:
        return LED_1_CYAN;
    case MAGENTA:
    case MAGENTA_BLINK_ON:
        return LED_1_MAGENTA;
    case WHITE:
    case WHITE_BLINK_ON:
        return LED_1_WHITE;
    case YELLOW:
    case YELLOW_BLINK_ON:
        return LED_1_YELLOW;
    case ALL:
    case ALL_BLINK_ON:
        return LED_1_ALL;
    default:
        return 0;
    }
}

byte RGBInterpreterDefaultPB::getColorLed2(ColorsRGBEnum color){
    switch (color){
    case RED:
    case RED_BLINK_ON:
        return LED_2_RED;
    case GREEN:    
    case GREEN_BLINK_ON:   
        return LED_2_GREEN;
    case BLUE:
    case BLUE_BLINK_ON:
        return LED_2_BLUE;
    case CYAN:
    case CYAN_BLINK_ON:
        return LED_2_CYAN;
    case MAGENTA:
    case MAGENTA_BLINK_ON:
        return LED_2_MAGENTA;
    case WHITE:
    case WHITE_BLINK_ON:
        return LED_2_WHITE;
    case YELLOW:
    case YELLOW_BLINK_ON:
        return LED_2_YELLOW;
    case ALL:
    case ALL_BLINK_ON:
        return LED_2_ALL;
    default:
        return 0;
    }
}

byte RGBInterpreterDefaultPB::getColorLed3(ColorsRGBEnum color){
    switch (color){
    case RED:
    case RED_BLINK_ON:
        return LED_3_RED;
    case GREEN:    
    case GREEN_BLINK_ON:   
        return LED_3_GREEN;
    case YELLOW:
    case YELLOW_BLINK_ON:
        return LED_3_YELLOW;
    case ALL:
    case ALL_BLINK_ON:
        return LED_3_ALL;
    default:
        return 0;
    }
}