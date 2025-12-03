#include<iostream>
#include<string>
using namespace std;

class Product{
    private:
    string name;
    int price;

    public:
    void setname(string name) {
        this->name = name;
    }

    string getname() {
        return name;
    }

    void setprice(int price) {
    this->price = price;
    }

    int getprice() {
        return price;
    }
};

int main(){
    Product Laptop;
    Laptop.setname("Laptop");
    cout<<"\nThe Name is "<<Laptop.getname();

    Laptop.setprice(75000);
    if(Laptop.getprice() < 0)
        {cout<<"\nPrice cannot be negative!";}
    else{
        cout<<"\nThe Price is "<<Laptop.getprice();}      
}
