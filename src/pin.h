#pragma once
#include <Arduino.h>

/**
 * @class Pin
 * Basic pin, encapsulates a pin number and mode
 * 
 * Available Modes:
 * ---------------
 * INPUT
 * OUTPUT
 * PULLUP
 * INPUT_PULLUP
 * PULLDOWN
 * INPUT_PULLDOWN
 * OPEN_DRAIN
 * OUTPUT_OPEN_DRAIN
 * ANALOG
 * //Interrupt Modes
 * DISABLED
 * RISING
 * FALLING
 * CHANGE
 * ONLOW
 * ONHIGH
 * ONLOW_WE
 * ONHIGH_WE
 */
class Pin {
protected:
/**
 * @brief Construct a new Pin object,protected because you should not use this class directly, use `DigitalPin` or `AnalogPin` or one of the others instead (`LED`, etc.)
 * @param pin Pin number
 * @param mode see available modes in class description
 */
  Pin(uint8_t pin,uint8_t mode);
public:
/**
 * @brief Return the mode of the pin (only valid if you used `setMode`)
 * 
 * @return uint8_t see available modes in class description
 */
  uint8_t mode() const;
  /**
   * @brief Set the pin mode
   * 
   * @param mode see available modes in class description
   */
  void setMode(uint8_t mode);
protected:
  uint8_t _pin;
  uint8_t _mode;
};

/**
 * @class DigitalPin
 * Use for digital pins
 */
class DigitalPin : public Pin {
  public:
  /**
   * @brief Construct a new Digital Pin object
   * 
   * @param pin Pin number
   * @param mode see available modes in class description
   */
    DigitalPin(uint8_t pin,uint8_t mode);
    /**
     * @brief Read the digital pin
     * 
     * @return true when the pin is HIGH
     * @return false when the pin is LOW
     */
    bool read() const;
    /**
     * @brief Set the pin value
     * 
     * @param value is LOW when false, HIGH when true
     */
    void write(bool value) const;
};

/**
 * @class AnalogPin
 * Allows read/write of analog pins, usually the value is 0-1023 
 */
class AnalogPin : public Pin {
  public:
  /**
   * @brief Construct a new Analog Pin object
   * 
   * @param pin Pin number
   * @param mode see available modes in class description
   */
    AnalogPin(uint8_t pin,uint8_t mode);
    int16_t read() const;
    void write(int16_t value) const;
};