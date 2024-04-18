#define WATERRESERVOIR_H



class WaterReservoir {
public:
    // Constructeur
    WaterReservoir(int capacity, int pin);

    // Méthodes
    int getWaterLevel();
    void drain(int amount);

private:
    int _capacity;       
    int _currentLevel;   
    int _pin;            
};

