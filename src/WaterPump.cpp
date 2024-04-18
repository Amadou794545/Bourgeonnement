#include "WaterPump.h"
#include <Arduino.h>


WaterPump::WaterPump(int pin) : _pin(pin), _active(false) {
    pinMode(_pin, OUTPUT); 
    digitalWrite(_pin, LOW); 
}

void WaterPump::activate() {
    digitalWrite(_pin, HIGH); 
    _active = true; 
}

void WaterPump::deactivate() {
    digitalWrite(_pin, LOW); 
    _active = false; 
}

bool WaterPump::isActive() {
    return _active; 
}
