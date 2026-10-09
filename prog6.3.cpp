#include <iostream>
using namespace std;

class Counter {
    int v;
public:
    Counter(int v = 0) : v(v) {}

    // Pre-increment (++c)
    Counter& operator++() {
        ++v;
        return *this;
    }

    // Post-increment (c++) - uses dummy int parameter to differentiate
    Counter operator++(int) {
        Counter temp = *this;
        ++v;
        return temp;
    }

    int value() const {
        return v;
    }
};

class SafeArr {
    int a[5] = {10, 20, 30, 40, 50};
public:
    // Bounds-checked subscript operator []
    int& operator[](int i) {
        if (i < 0 || i >= 5) {
            cout << "out of range!\n";
            return a[0]; // returns reference to first element on overflow
        }
        return a[i];
    }
};

int main() {
    Counter c(5);
    ++c; // 5 -> 6
    c++; // 6 -> 7
    cout << "Counter = " << c.value() << endl;

    SafeArr s;
    cout << "s[2] = " << s[2] << endl; // Prints 30
    s[10] = 99;                       // Triggers range check

    return 0;
}
