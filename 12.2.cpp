#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<int> scores = {50, 90, 20, 75, 60, 95, 40};

    priority_queue<int> pq(scores.begin(), scores.end());

    cout << "Top 3 scores: ";

    for (int k = 0; k < 3 && !pq.empty(); ++k) {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;

    return 0;
}
