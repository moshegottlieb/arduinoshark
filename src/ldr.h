#pragma once

#include "pin.h"
/**
 * @class LDR
 * Our LDR (light dependent resistor) class
 * Used to determine the light level outside
 */
class LDR : AnalogPin{
 public:
  LDR(uint8_t pin,uint8_t pot);
  /**
   * @return Current lighting value by calculating the difference between the two pins
   */
  int16_t value() const;
private:
  AnalogPin _pot;
};
