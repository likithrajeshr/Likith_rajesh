#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    unique_ptr<Student> s = make_unique<Student>("Rahul");

    s->display();

    return 0;
}
