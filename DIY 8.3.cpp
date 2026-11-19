#include <iostream>
using namespace std;

class Base {
public:
    ~Base() {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base {
    int* ptr;

public:
    Derived() {
        ptr = new int[100];
        cout << "Memory Allocated\n";
    }

    ~Derived() {
        delete[] ptr;
        cout << "Derived Destructor\n";
    }
};

int main() {
    Base* b = new Derived();

    delete b;

    return 0;
}
