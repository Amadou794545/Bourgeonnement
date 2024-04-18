#include "WaterReservoir.h"
#include <Arduino.h>

WaterReservoir::WaterReservoir(int capacity, int pin) 
    : _capacity(capacity), _currentLevel(0), _pin(pin) {
}

int WaterReservoir::getWaterLevel() {
    // Vous pouvez utiliser le capteur de niveau d'eau pour obtenir le niveau actuel
    // Pour l'exemple, on retourne le niveau courant du réservoir
    return _currentLevel;
}

void WaterReservoir::drain(int amount) {
    _currentLevel -= amount;
    if (_currentLevel < 0) {
        _currentLevel = 0; 
    }
}
