#include <Arduino.h>
#include "capteur_humidite.h"

CapteurHumidite::CapteurHumidite(int pin) {
  m_pin = pin;
  pinMode(m_pin, INPUT);
}

int CapteurHumidite::lireHumidite() {
  return analogRead(m_pin);
}