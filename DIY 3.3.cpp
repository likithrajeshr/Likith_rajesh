#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void setData(float r, float i) { real = r; imag = i; }
    void display() { cout << real << "+" << imag << "i\n"; }
};

int main() {
    Complex c[3];
    c[0].setData(2, 3);
    c[1].setData(4, 5);
    c[2].setData(6, 7);
    for(int i=0;i<3;i++) c[i].display();
}
