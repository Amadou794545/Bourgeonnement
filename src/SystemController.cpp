#include <Arduino.h>
#include "HumiditySensor.h"
#include "Led.h"
#include "Relay.h"
#include "SystemController.h"
#include "WaterLevelSensor.h"
#include "WaterPump.h"
#include "WaterReservoir.h"

#define TARGET_HUMIDITY 60
#define WATERING_TIME 10
#define MIN_WATER_LEVEL 20


const int HUMIDITY_SENSOR_PIN = 0;
const int WATER_LEVEL_SENSOR_PIN = 1;
const int RELAY_PIN = 2;
const int WATER_PUMP_PIN = 3;
const int LED_PIN = 4;

SystemController::SystemController() : led(LED_PIN),
                                       pump(WATER_PUMP_PIN),
                                       relay(RELAY_PIN),
                                       waterlevelsensor(WATER_LEVEL_SENSOR_PIN),
                                       humisensor(HUMIDITY_SENSOR_PIN)
{
  
}


void SystemController::loop()
{
    bool pumpActive = false;
    bool ledBlink = false;

    int humidity = humisensor.readHumidity();
    int waterLevel = waterlevelsensor.readWaterLevel();

    if (humidity < TARGET_HUMIDITY && waterLevel > MIN_WATER_LEVEL)
    {
        if (!pumpActive)
        {
            pumpActive = true;
            waterPlant();
            delay(WATERING_TIME * 1000);

            humidity = humisensor.readHumidity();
        }
    }
    else
    {
        pumpActive = false;
        delay(1000);
    }

    if (waterLevel < MIN_WATER_LEVEL)
    {
        ledBlink = !ledBlink;
        if (ledBlink)
        {
            led.turnOn();
            delay(500);
        }
        else
        {
            led.turnOff();
            delay(500);
        }
    }
}

void SystemController::waterPlant()
{
  relay.activate();
  pump.activate();
  led.turnOn();
  delay(WATERING_TIME * 1000);
  relay.deactivate();
  pump.deactivate();
  led.turnOff();
}