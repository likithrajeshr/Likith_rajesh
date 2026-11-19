#include <iostream>
#include <thread>
using namespace std;

long counter = 0;

void add(int times) {
    for (int i = 0; i < times; i++) {
        ++counter;
    }
}

int main() {
    thread t1(add, 100000);
    thread t2(add, 100000);

    t1.join();
    t2.join();

    cout << "Counter = " << counter << endl;

    return 0;
}
