#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

long counter = 0;
mutex m;

void addSafe(int times) {
    for (int i = 0; i < times; ++i) {
        lock_guard<mutex> lk(m);

        ++counter;
    }
}

int main() {
    thread t1(addSafe, 100000);
    thread t2(addSafe, 100000);

    t1.join();
    t2.join();

    cout << "counter = " << counter
         << " (expected 200000)" << endl;

    return 0;
}
