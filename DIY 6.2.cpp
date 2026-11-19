#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

class Fraction
{
    int num, den;

public:
    Fraction(int n = 0, int d = 1)
    {
        num = n;
        den = d;

        int g = gcd(num, den);

        num /= g;
        den /= g;
    }

    bool operator<(Fraction f)
    {
        return num * f.den < f.num * den;
    }

    bool operator>(Fraction f)
    {
        return num * f.den > f.num * den;
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction f1(4, 8);
    Fraction f2(3, 4);

    cout << "Fraction 1: ";
    f1.display();

    cout << "Fraction 2: ";
    f2.display();

    if (f1 < f2)
        cout << "Fraction 1 is smaller\n";

    if (f2 > f1)
        cout << "Fraction 2 is greater\n";

    return 0;
}
