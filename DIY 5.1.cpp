#include <iostream>
using namespace std;

class Counter
{
    int count;

    static int totalCreated;
    static int alive;

public:
    // Constructor
    Counter()
    {
        count = 0;
        totalCreated++;
        alive++;
    }

    // Destructor
    ~Counter()
    {
        alive--;
    }

    void increment()
    {
        count++;
    }

    void decrement()
    {
        count--;
    }

    void display()
    {
        cout << "Count = " << count << endl;
    }

    static void showObjectCount()
    {
        cout << "Total objects ever created = " << totalCreated << endl;
        cout << "Currently alive objects = " << alive << endl;
    }
};

// Static member initialization
int Counter::totalCreated = 0;
int Counter::alive = 0;

int main()
{
    Counter::showObjectCount();

    Counter c1;
    Counter c2;

    Counter::showObjectCount();

    {
        Counter c3;
        Counter::showObjectCount();
    }

    Counter::showObjectCount();

    return 0;
}
