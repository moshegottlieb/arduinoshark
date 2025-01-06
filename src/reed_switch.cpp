#include "reed_switch.h"

ReedSwitch::ReedSwitch(uint8_t pin)
:DigitalPin(pin,INPUT_PULLUP){
}

bool ReedSwitch::isClosed() const{
  return digitalRead(_pin) == LOW;
}
