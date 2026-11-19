#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
        cout << "Person Constructor\n";
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

// Derived class 1
class Student : virtual public Person {
protected:
    int rollNo;

public:
    Student(string n, int r) : Person(n) {
        rollNo = r;
        cout << "Student Constructor\n";
    }
};

// Derived class 2
class Employee : virtual public Person {
protected:
    int empId;

public:
    Employee(string n, int e) : Person(n) {
        empId = e;
        cout << "Employee Constructor\n";
    }
};

// Derived class 3
class TA : public Student, public Employee {
    string subject;

public:
    TA(string n, int r, int e, string s)
        : Person(n), Student(n, r), Employee(n, e) {
        subject = s;
        cout << "TA Constructor\n";
    }

    void display() {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    TA t("Rahul", 101, 501, "C++");

    cout << "\nTA Details:\n";
    t.display();

    return 0;
}
