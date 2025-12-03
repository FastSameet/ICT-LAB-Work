#include<iostream>
using namespace std;

class Car{
    private:
    float speed;
    float fuel;

    public:
    void setspeed(int speed) {
        this->speed = speed;
    }

    float getspeed() {
        return speed;
    }

    void setfuel(float fuel) {
        
        if(fuel < 0)
            {cout<<"\nfuel cannot be negative!";
            this->fuel = fuel;}
        else
            {this->fuel = fuel;}
    }

    float getfuel() {
        return fuel;
    }
};

int main(){
    Car car;
    car.setspeed(120);
    cout<<"\nThe speed is "<<car.getspeed();
    car.setfuel(-50);
    if(car.getfuel() > 0)
        {cout<<"\nThe fuel is "<<car.getfuel();}    
		return 0;       
}
