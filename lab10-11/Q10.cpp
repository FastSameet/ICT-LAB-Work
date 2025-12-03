#include<iostream>
using namespace std;

class Employee{
    public:
    int salary = 10000;
    void displaySalary(){
        cout<<"Your Salary is "<<salary<<endl;
    }
};

class Manager : public Employee{
    public:
    void bonus(){
        cout<<"Bonus is 5000"<<endl;
    }
};

int main()
{
    Manager manager;
    manager.displaySalary();
    manager.bonus();

    return 0;
}
