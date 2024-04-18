#define CAPTEUR_HUMIDITE_H

class HumiditySensor
{
public:
    HumiditySensor(int pin);

    int readHumidity();

private:
    int _pin;
};
