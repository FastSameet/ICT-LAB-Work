#include <iostream>
using namespace std;

class Vehicle {
public:
    int speed;
    void setSpeed(int speed) {
        this->speed = speed;
    }

    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    void fuelType() {
        cout << "Fuel Type: Petrol" << endl;
    }
};

int main() {
    Car myCar;

    myCar.setSpeed(120);  
    myCar.showSpeed();     
    myCar.fuelType();       

    return 0;
}
