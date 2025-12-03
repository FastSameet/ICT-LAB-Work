#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Animal is eating\n";
    }
};

class dog : public Animal{
    public:
    void bark(){
        cout<<"Dog is barking\n";
    }
};

int main(){

    dog Dog;
    Dog.eat();
    Dog.bark();

    return 0;
}

