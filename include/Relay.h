#define RELAY_H

class Relay {
public:
    Relay(int pin);

    void activate();
    void deactivate();

private:
    int _pin; 
};