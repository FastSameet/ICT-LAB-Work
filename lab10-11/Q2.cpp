#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;

    public:
    void setLength(int lenght) {
        this->length = lenght;
    }

    int getLength() {
        return length;
    }

    void setWidth(int width) {
        this->width = width;
    }

    int getWidth() {
        return width;
    }

    int area(){
        return width * length;
    }
};

int main(){
    Rectangle rectangle;

    rectangle.setLength(5);
    cout<<"\nLength of Rectangle is "<<rectangle.getLength();

    rectangle.setWidth(3);
    cout<<"\nWidth of Rectangle is "<<rectangle.getWidth();

    cout<<"\nArea of Rectangle is "<<rectangle.area();

    return 0;
}
