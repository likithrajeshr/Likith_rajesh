#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> freq;

    string words[] = {
        "cpp", "java", "cpp", "python",
        "java", "cpp", "python", "cpp"
    };

    int n = 8;

    for (int i = 0; i < n; i++) {
        freq[words[i]]++;
    }

    cout << "Word Frequencies:\n";

    for (auto p : freq) {
        cout << p.first << " = " << p.second << endl;
    }

    string mostFrequent;
    int maxCount = 0;

    for (auto p : freq) {
        if (p.second > maxCount) {
            maxCount = p.second;
            mostFrequent = p.first;
        }
    }

    cout << "\nMost frequent word: " << mostFrequent << endl;
    cout << "Count: " << maxCount << endl;

    return 0;
}
