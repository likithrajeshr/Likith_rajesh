#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived class 1
class Manager : public Employee {
    int teamSize;

public:
    Manager(string n, int i, int t) : Employee(n, i) {
        teamSize = t;
    }

    void display() {
        Employee::display();
        cout << "Team Size: " << teamSize << endl;
    }
};

// Derived class 2
class Engineer : public Employee {
    string skill;

public:
    Engineer(string n, int i, string s) : Employee(n, i) {
        skill = s;
    }

    void display() {
        Employee::display();
        cout << "Skill: " << skill << endl;
    }
};

int main() {
    Manager m("Rahul", 101, 10);
    Engineer e("Arun", 102, "C++");

    cout << "Manager Details:" << endl;
    m.display();

    cout << "\nEngineer Details:" << endl;
    e.display();

    return 0;
}
