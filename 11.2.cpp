#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

int main() {
    // Vector
    vector<int> marks = {88, 91, 75};
    marks.push_back(95);

    cout << "vector(" << marks.size() << "): ";

    for (int m : marks)
        cout << m << " ";

    cout << endl;

    // Set
    set<int> uniq = {3, 1, 2, 3, 1};

    cout << "set: ";

    for (int x : uniq)
        cout << x << " ";

    cout << endl;

    // Map
    map<string, int> port = {
        {"eth0", 1},
        {"eth1", 2}
    };

    port["eth2"] = 3;

    cout << "map: ";

    for (auto &p : port)
        cout << p.first << "=" << p.second << " ";

    cout << endl;

    // Unordered Map
    unordered_map<string, int> freq;

    for (string w : {"cpp", "stl", "cpp"})
        freq[w]++;

    cout << "unordered_map: cpp x" << freq["cpp"] << endl;

    // Queue
    queue<int> q;

    q.push(10);
    q.push(20);

    cout << "queue front=" << q.front()
         << " back=" << q.back() << endl;

    return 0;
}
