#include <iostream>
using namespace std;

class Complex {
    double re, im;
public:
    Complex(double r = 0, double i = 0) : re(r), im(i) {}

    // Member function: a + b
    Complex operator+(const Complex &o) const {
        return Complex(re + o.re, im + o.im);
    }

    // Member function: a == b
    bool operator==(const Complex &o) const {
        return re == o.re && im == o.im;
    }

    // Friend function: left operand is 'cout', not Complex
    friend ostream& operator<<(ostream &os, const Complex &c) {
        os << c.re << (c.im >= 0 ? "+" : "") << c.im << "i";
        return os; // enables chaining (e.g., cout << a << b;)
    }
};

int main() {
    Complex a(2, 3), b(1, -4);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a == b ? " << (a == b ? "yes" : "no") << endl;

    return 0;
}

