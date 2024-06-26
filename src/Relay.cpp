#include "Relay.h"
#include <Arduino.h>

// Constructeur
Relay::Relay(int pin) : _pin(pin) {
    pinMode(_pin, OUTPUT); 
    digitalWrite(_pin, LOW); 
}

void Relay::activate() {
    digitalWrite(_pin, HIGH); 
}

void Relay::deactivate() {
    digitalWrite(_pin, LOW); 
}
