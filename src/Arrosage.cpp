
#include "Arrosage.h"
#include <Arduino.h>
#include "capteur_humidite.h"
#include "ampoule.h"
#include "relai.h"


Arrosage::Arrosage() {
  Ampoule ampoule(32);
  CapteurHumidite capteur(36);
  Relai relai(22);

  int moistureValue = capteur.lireHumidite();
  if (moistureValue < 500) {
    ampoule.allumer();
    relai.ouvrir();
    delay(2000);
  } else {
    ampoule.eteindre();
    relai.fermer();
    }
}





