#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 50, 30, 90, 20, 80, 60};

    priority_queue<int> pq;

    for (int x : v) {
        pq.push(x);
    }

    cout << "Top 3 numbers: ";

    for (int i = 0; i < 3 && !pq.empty(); i++) {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;

    return 0;
}
