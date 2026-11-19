#include <iostream>
#include <string>
using namespace std;

// Function template
template <typename T>
T maxOf(T a, T b) {
    return (a > b) ? a : b;
}

// Class template
template <typename T>
class Stack {
    T data[100];
    int top = -1;

public:
    void push(T x) {
        data[++top] = x;
    }

    T pop() {
        return data[top--];
    }

    bool empty() const {
        return top < 0;
    }
};

int main() {
    cout << maxOf(3, 7) << " "
         << maxOf(2.5, 1.1) << " "
         << maxOf<string>("apple", "mango") << endl;

    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty())
        cout << s.pop() << " ";

    cout << endl;

    return 0;
} 
