#include <Arduino.h>
#include "HumiditySensor.h"

HumiditySensor::HumiditySensor(int pin) : _pin(pin) {
}


int HumiditySensor::readHumidity() {
    int sensorValue = analogRead(_pin); 
    int humidityPercent = map(sensorValue, 0, 1023, 0, 100); 
    return humidityPercent; 
}