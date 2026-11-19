#include <iostream>
using namespace std;
class Account {
protected:
    double balance = 0;              // visible to derived, hidden from outside
public:
    void deposit(double a) { balance += a; }
    double get() const { return balance; }
};
class Savings : public Account {      // hierarchical: both derive from Account
public:
    void addInterest() { balance *= 1.04; }    // reaches protected 'balance'
};
class Current : public Account {
public:
    void charge(double fee) { balance -= fee; }
};
int main() {
    Savings s; s.deposit(1000); s.addInterest();
    Current c; c.deposit(1000); c.charge(50);
    cout << "Savings = " << s.get() << ", Current = " << c.get() << endl;
    return 0;
}
