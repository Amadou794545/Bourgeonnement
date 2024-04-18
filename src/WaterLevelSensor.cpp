#include <Arduino.h>
#include "WaterLevelSensor.h"

WaterLevelSensor::WaterLevelSensor(int pin) : _pin(pin)
{
}

int WaterLevelSensor::readWaterLevel()
{
    int sensorValue = analogRead(_pin);
    int waterLevelPercent = map(sensorValue, 0, 1023, 0, 100);
    return waterLevelPercent;
}
