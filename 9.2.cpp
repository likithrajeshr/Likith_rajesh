#include <iostream>
#include <exception>
using namespace std;

class Guard {
    int n;

public:
    Guard(int n) : n(n) {
        cout << "acquire " << n << endl;
    }

    ~Guard() {
        cout << "release " << n << endl;
    }
};

void risky() {
    Guard g1(1);
    Guard g2(2);

    throw runtime_error("boom");
}

int main() {
    try {
        risky();
    }
    catch (const exception &e) {
        cout << "caught: " << e.what() << endl;
    }

    return 0;
}
