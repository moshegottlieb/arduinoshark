#include "pin.h"


Pin::Pin(uint8_t pin,uint8_t mode):_pin(pin){
  setMode(mode);
}

uint8_t Pin::mode() const{
  return _mode;
}
void Pin::setMode(uint8_t mode){
  _mode = mode;
  pinMode(_pin,mode);
}

DigitalPin::DigitalPin(uint8_t pin,uint8_t mode):Pin(pin,mode){
}

bool DigitalPin::read() const{
  ::digitalRead(_pin) == HIGH;
}

void DigitalPin::write(bool value) const{
  ::digitalWrite(_pin,value ? HIGH : LOW);
}

AnalogPin::AnalogPin(uint8_t pin,uint8_t mode):Pin(pin,mode){
}

int16_t AnalogPin::read() const{
  return ::analogRead(_pin);
}
void AnalogPin::write(int16_t value) const{
  ::analogWrite(_pin,value);
}
