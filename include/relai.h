#define RELAI_H

class Relai {
private:
    int m_pin;
public:
    Relai(int pin);

    void ouvrir();
    void fermer();
};