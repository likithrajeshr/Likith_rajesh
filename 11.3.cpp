#include <iostream>
#include <string>
using namespace std;

// Class template with two type parameters
template <typename K, typename V>
struct Pair {
    K key;
    V value;

    void show() const {
        cout << key << " -> " << value << endl;
    }
};

// Function template with two type parameters
template <typename A, typename B>
auto bigger(A a, B b) {
    return (a > b) ? a : b;
}

int main() {
    Pair<string, int> p{"ECE", 121};
    p.show();

    Pair<int, double> q{7, 3.5};
    q.show();

    cout << "bigger(3, 9.5) = " << bigger(3, 9.5) << endl;

    return 0;
}
