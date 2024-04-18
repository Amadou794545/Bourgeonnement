#include <Arduino.h>
#include "ampoule.h"

Ampoule::Ampoule(int m_pin) {
  pinMode(m_pin, OUTPUT);
}

void Ampoule::allumer() {
  digitalWrite(m_pin, HIGH);
}

void Ampoule::eteindre() {
  digitalWrite(m_pin, LOW);
}
