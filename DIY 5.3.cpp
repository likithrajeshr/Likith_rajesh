#include <iostream>
using namespace std;

class Order
{
    int orderID;

    static int nextID;

public:
    Order()
    {
        orderID = nextID++;
    }

    void display()
    {
        cout << "Order ID: " << orderID << endl;
    }
};

int Order::nextID = 1001;

int main()
{
    Order o1;
    Order o2;
    Order o3;
    Order o4;

    o1.display();
    o2.display();
    o3.display();
    o4.display();

    return 0;
}
