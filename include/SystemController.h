#define SYSTEMCONTROLLER_H
#include "HumiditySensor.h"
#include "Led.h"
#include "Relay.h"
#include "WaterLevelSensor.h"
#include "WaterPump.h"
#include "WaterReservoir.h"

class SystemController{
public:
    SystemController();
    void loop();
private:
    LED led;
    WaterPump pump;
    Relay relay;
    WaterLevelSensor waterlevelsensor;
    HumiditySensor humisensor;
    void waterPlant();
};