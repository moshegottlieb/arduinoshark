#include "ldr.h"
#include "print.h"
#include <Arduino.h>

LDR::LDR(int pin,int pot):
  InputPin(pin),_pot(pot){
}
int LDR::value() const {
  int pot = _pot.analogRead();
  int value = analogRead();
  return value - pot;
}
