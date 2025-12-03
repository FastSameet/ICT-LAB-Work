#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Student s;       
    s.setName("Ali"); 
    s.setAge(20);    

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;

    return 0;
}
