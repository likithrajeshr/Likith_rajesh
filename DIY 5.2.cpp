#include <iostream>
using namespace std;

class Time
{
    int hh, mm;

public:
    Time(int h, int m)
    {
        hh = h;
        mm = m;
    }

    friend Time laterOf(Time t1, Time t2);

    void display()
    {
        cout << hh << ":" << mm << endl;
    }
};

Time laterOf(Time t1, Time t2)
{
    if (t1.hh > t2.hh)
        return t1;
    else if (t1.hh < t2.hh)
        return t2;
    else
    {
        if (t1.mm > t2.mm)
            return t1;
        else
            return t2;
    }
}

int main()
{
    Time t1(10, 30);
    Time t2(12, 15);

    Time later = laterOf(t1, t2);

    cout << "Later time: ";
    later.display();

    return 0;
}
