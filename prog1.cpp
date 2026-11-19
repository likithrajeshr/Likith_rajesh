#include <iostream>
using namespace std;    // std:: now optional for cout, cin, endl

// Swap using REFERENCES (clean, no & at call site)
void swapRef(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

// Swap using POINTERS (the C way) -- shown for contrast
void swapPtr(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x = 10, y = 20;

    swapRef(x, y);          // no & needed
    cout << "After swapRef: x=" << x << " y=" << y << endl;

    swapPtr(&x, &y);        // must pass addresses
    cout << "After swapPtr: x=" << x << " y=" << y << endl;

    int &alias = x;         // alias is another name for x
    alias = 99;             // changes x
    cout << "x via alias = " << x << endl;

    return 0;
}
