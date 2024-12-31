#pragma once

#include "pin.h"

/**
 * @class LDR
 * Our LDR (light dependent resistor) class
 * Used to determine the light level outside
 */
class LDR : InputPin{
 public:
  LDR(int pin,int pot);
  /**
   * @return Current lighting value by calculating the difference between the two pins
   */
  int value() const;
private:
  InputPin _pot;
};
