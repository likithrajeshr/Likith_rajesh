#include <iostream>
using namespace std;

class Money
{
    int rupees, paise;

public:
    Money(int r = 0, int p = 0)
    {
        rupees = r + p / 100;
        paise = p % 100;
    }

    Money operator+(Money m)
    {
        int totalPaise = (rupees * 100 + paise) +
                         (m.rupees * 100 + m.paise);

        return Money(totalPaise / 100, totalPaise % 100);
    }

    Money operator-(Money m)
    {
        int totalPaise = (rupees * 100 + paise) -
                         (m.rupees * 100 + m.paise);

        return Money(totalPaise / 100, totalPaise % 100);
    }

    void display()
    {
        cout << "Rs. " << rupees << "." << paise << endl;
    }
};

int main()
{
    Money m1(100, 75);
    Money m2(50, 50);

    Money sum = m1 + m2;
    Money diff = m1 - m2;

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}
