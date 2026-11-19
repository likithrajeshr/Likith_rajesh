#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Queue {
    T data[100];
    int frontIndex, rear;

public:
    Queue() {
        frontIndex = 0;
        rear = -1;
    }

    void enqueue(T x) {
        data[++rear] = x;
    }

    void dequeue() {
        if (frontIndex <= rear)
            frontIndex++;
    }

    T front() {
        return data[frontIndex];
    }

    bool empty() {
        return frontIndex > rear;
    }
};

int main() {
    Queue<string> q;

    q.enqueue("Apple");
    q.enqueue("Banana");
    q.enqueue("Mango");

    cout << "Front: " << q.front() << endl;

    q.dequeue();

    cout << "Front after dequeue: " << q.front() << endl;

    q.dequeue();
    cout << "Front after dequeue: " << q.front() << endl;

    return 0;
}
