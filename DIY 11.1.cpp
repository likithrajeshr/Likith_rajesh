#include <iostream>
using namespace std;

// Swap template
template <typename T>
void swapVals(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Find maximum template
template <typename T>
T findMax(T arr[], int n) {
    T max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    int a = 10, b = 20;

    swapVals(a, b);

    cout << "After swap: " << a << " " << b << endl;

    int x[] = {10, 50, 30, 20};

    cout << "Max integer: " << findMax(x, 4) << endl;

    double y[] = {2.5, 8.7, 4.3, 6.1};

    cout << "Max double: " << findMax(y, 4) << endl;

    double c = 1.5, d = 3.5;

    swapVals(c, d);

    cout << "After double swap: " << c << " " << d << endl;

    return 0;
}
