#pragma once

#include "pin.h"

class PushButton : public DigitalPin {
public:
  PushButton(int pin);
  void (*buttonStateChanged)(bool);
  void step();
private:
  int _state;
};
