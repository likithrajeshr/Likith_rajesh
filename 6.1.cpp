#include <iostream>
using namespace std;

class Complex {
    double re, im;

public:
    Complex(double r = 0, double i = 0) : re(r), im(i) {}

    Complex operator+(const Complex &o) const {       // member: a + b
        return Complex(re + o.re, im + o.im);
    }

    bool operator==(const Complex &o) const {         // member: a == b
        return re == o.re && im == o.im;
    }

    // friend: left operand is 'cout', not Complex
    friend ostream& operator<<(ostream& os, const Complex &c) {
        os << c.re << (c.im >= 0 ? "+" : "") << c.im << "i";
        return os;                                    // enables chaining
    }
};

int main() {
    Complex a(2, 3), b(1, 4);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a == b ? " << (a == b ? "yes" : "no") << endl;
}
