#include <Arduino.h>
#include "HumiditySensor.h"
#include "Led.h"
#include "Relay.h"
#include "SystemController.h"
#include "WaterLevelSensor.h"
#include "WaterPump.h"
#include "WaterReservoir.h"


SystemController Watering;
unsigned long previousMillis = 0;
const unsigned long interval = 4 * 60 * 60 * 1000;

void setup() {

}

void loop() {
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;

        Watering.loop();
    }
}

