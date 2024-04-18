#define WATERLEVELSENSOR_H

class WaterLevelSensor
{
public:

    WaterLevelSensor(int pin);

    int readWaterLevel();

private:
    int _pin;
};
