#pragma once

#include "pin.h"

class ReedSwitch : public DigitalPin {
public:
    ReedSwitch(uint8_t pin);
    /**
     * @brief read the reed switch state
     * 
     * @return true Reed switch is closed
     * @return false Reed switch is open
     */
    bool isClosed() const;
};