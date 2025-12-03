#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    int id;
    int salary;

    public:
    void setid(int id) {
        this->id = id;
    }

    int getid() {
        return id;
    }

    void setsalary(int salary) {
    this->salary = salary;
    }

    int getsalary() {
        return salary;
    }
};

int main(){
    Employee EMP;
    EMP.setid(101);
    cout<<"\nThe id is "<<EMP.getid();
    EMP.setsalary(50000);
    if(EMP.getsalary() < 0)
        {cout<<"\nsalary cannot be negtive";}
    else{
        cout<<"\nThe salary is "<<EMP.getsalary();}           
}
