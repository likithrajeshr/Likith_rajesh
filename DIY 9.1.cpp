#include <iostream>
#include <exception>
using namespace std;

class InsufficientFunds : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient Balance!";
    }
};

class BankAccount {
    double balance;

public:
    BankAccount(double b) : balance(b) {}

    void withdraw(double amount) {
        if (amount > balance)
            throw InsufficientFunds();

        balance -= amount;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(5000);

    try {
        acc.withdraw(6000);
    }
    catch (const InsufficientFunds &e) {
        cout << e.what() << endl;
    }

    return 0;
}
