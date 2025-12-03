#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area()        
        {cout << "Area of shape" << endl;}
};

class Rectangle : public Shape {
public:
    float length, width;
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    void area() override       
        {cout << "Area of Rectangle: " << length * width << endl;}
};

int main() {
    Rectangle rect;

    rect.setDimensions(10, 5);   
    rect.area();                 

    return 0;
}
