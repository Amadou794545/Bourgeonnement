#define LED_H

class LED
{
public:
    LED(int pin);

    void turnOn();
    void turnOff();

private:
    int _pin;
};
