#define AMPOULE_H

class Ampoule {
private:
    int m_pin;
public:
    Ampoule(int m_pin);

    void allumer();
    void eteindre();
};