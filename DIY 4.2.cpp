#include <iostream>
using namespace std;

class Stack
{
    int *a, top, size;

public:
    Stack(int n) : size(n), top(-1)
    {
        a = new int[size];
    }

    void push(int x)
    {
        if (top < size - 1)
            a[++top] = x;
    }

    int pop()
    {
        if (top >= 0)
            return a[top--];

        return -1;
    }

    ~Stack()
    {
        delete[] a;
    }
};

int main()
{
    Stack s(3);

    s.push(10);
    s.push(20);

    cout << s.pop() << " " << s.pop();

    return 0;
}
