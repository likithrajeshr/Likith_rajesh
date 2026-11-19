#include <iostream>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double b) {
        balance = b;
    }

    virtual void calculateInterest() = 0;

    virtual ~Account() {}
};

class Savings : public Account {
public:
    Savings(double b) : Account(b) {}

    void calculateInterest() override {
        cout << "Savings Interest: " << balance * 0.05 << endl;
    }
};

class Current : public Account {
public:
    Current(double b) : Account(b) {}

    void calculateInterest() override {
        cout << "Current Interest: " << balance * 0.02 << endl;
    }
};

int main() {
    Account* accounts[] = {
        new Savings(10000),
        new Current(20000)
    };

    for (Account* a : accounts) {
        a->calculateInterest();
    }

    for (Account* a : accounts) {
        delete a;
    }

    return 0;
}
