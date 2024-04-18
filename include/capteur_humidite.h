#define CAPTEUR_HUMIDITE_H

class CapteurHumidite {
private:
    int m_pin;
public:
    CapteurHumidite(int pin);

    int lireHumidite();
};
