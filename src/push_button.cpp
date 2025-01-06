#include "push_button.h"


PushButton::PushButton(int pin)
:DigitalPin(pin,INPUT){
}

bool PushButton::isPressed() const{
  return digitalRead(_pin);
}
