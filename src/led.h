#pragma once

#include "pin.h"
/**
 * @class LED
 */
class LED : AnalogPin {
public:
  LED(uint8_t pin);
  /**
   * Set the led level (0-255)
   */ 
  void set(int16_t level);
  
private:
    int _level;
};
