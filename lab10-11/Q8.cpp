#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setInfo(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void setRollNo(int rollNo) {
        this->rollNo = rollNo;
    }

    void displayRollNo() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.setInfo("John", 20);
    s.setRollNo(101);

    s.displayInfo();
    s.displayRollNo();

    return 0;
}
