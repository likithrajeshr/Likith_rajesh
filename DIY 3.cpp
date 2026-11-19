#include <iostream>
using namespace std;

inline int minVal(int a, int b) { return a < b ? a : b; }
inline int minVal(int a, int b, int c) { return minVal(minVal(a, b), c); }

int main() {
    cout << "Min(5,3) = " << minVal(5,3) << endl;
    cout << "Min(8,4,6) = " << minVal(8,4,6) << endl;
    return 0;
}
