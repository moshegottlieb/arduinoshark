#include "push_button.h"


PushButton::PushButton(int pin):DigitalPin(pin,INPUT),buttonStateChanged(nullptr),_state(-1){
}

void PushButton::step(){
  bool state = read();
  if (state != this->_state){
    this->_state = state;
    if (buttonStateChanged){
      buttonStateChanged(state);
    }
  }
}
