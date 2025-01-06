#include "ldr.h"
#include <Arduino.h>

LDR::LDR(uint8_t pin,uint8_t pot):
  AnalogPin(pin,INPUT),_pot(pot,INPUT){
}
int16_t LDR::value() const {
  auto pot = _pot.read();
  auto value = read();
  return value - pot;
}
