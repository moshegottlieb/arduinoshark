#pragma once

#include "pin.h"

class PushButton : public DigitalPin {
public:
  PushButton(int pin);
  /**
   * @brief Perform check and invoke callback if needed
   * 
   * @return true Button is pressed
   * @return false Button is not pressed
   */
  bool isPressed() const;
};
