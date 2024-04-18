#include <Arduino.h>
#include "Led.h"

LED::LED(int pin) : _pin(pin)
{
  pinMode(_pin, OUTPUT); 
}

void LED::turnOn()
{
  digitalWrite(_pin, HIGH); 
}


void LED::turnOff()
{
  digitalWrite(_pin, LOW); 
}
