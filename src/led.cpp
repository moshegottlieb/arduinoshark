#include "led.h"
#include <Arduino.h>

LED::LED(uint8_t pin):
    AnalogPin(pin,OUTPUT),
    _level(-1){

  }
  
void LED::set(int16_t level){
  if (level != _level){
    _level = level;
    write(_level);
  }
}
