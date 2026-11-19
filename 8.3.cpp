#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() const = 0;

    virtual ~Animal() {
        cout << "~Animal\n";
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof\n";
    }

    ~Dog() {
        cout << "~Dog\n";
    }
};

int main() {
    Animal *a = new Dog();

    if (Dog *d = dynamic_cast<Dog*>(a)) {
        cout << "downcast ok -> ";
        d->speak();
    }

    delete a;

    return 0;
}
