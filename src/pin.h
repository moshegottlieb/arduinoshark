#pragma once
#include <Arduino.h>

/**
 * @class Pin
 * Basic pin, encapsulates a pin number and mode
 */
class Pin {
protected:
/**
 * @brief Construct a new Pin object,protected because you should not use this class directly, use `DigitalPin` or `AnalogPin` or one of the others instead (`LED`, etc.)
 * @param pin Pin number
 * @param mode `INPUT` or `OUTPUT`
 */
  Pin(uint8_t pin,uint8_t mode);
public:
/**
 * @brief Return the mode of the pin (only valid if you used `setMode`)
 * 
 * @return uint8_t The current mode (`INPUT` or `OUTPUT`)
 */
  uint8_t mode() const;
  /**
   * @brief Set the pin mode
   * 
   * @param mode `INPUT` or `OUTPUT`
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
class DigitalPin : Pin {
  public:
  /**
   * @brief Construct a new Digital Pin object
   * 
   * @param pin Pin number
   * @param mode `INPUT` or `OUTPUT`
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
class AnalogPin : Pin {
  public:
  /**
   * @brief Construct a new Analog Pin object
   * 
   * @param pin Pin number
   * @param mode `INPUT` or `OUTPUT`
   */
    AnalogPin(uint8_t pin,uint8_t mode);
    int16_t read() const;
    void write(int16_t value) const;
};