#include <iostream>
using namespace std;
class Dashboard;
class Car {
    int speed = 0;
    friend class Dashboard;
public:
    void accelerate(){
        speed += 10;}
};
class Dashboard {
public: 
 void display(const Car &c) {cout << "Speed = " << c.speed << " km/h" << endl;}
};
int main() {
    Car c;
    c.accelerate();
    c.accelerate();
    Dashboard().display(c);
    return 0;
}
