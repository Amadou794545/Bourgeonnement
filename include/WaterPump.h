#define WATERPUMP_H

class WaterPump
{
public:
    WaterPump(int pin);

    void activate();
    void deactivate();
    bool isActive();

private:
    int _pin;
    bool _active;
};
