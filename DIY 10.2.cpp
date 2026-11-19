#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    if (!in || !out) {
        cout << "File open failed";
        return 1;
    }

    string line;
    int n = 1;

    while (getline(in, line)) {
        out << n << ". " << line << endl;
        n++;
    }

    cout << "File copied successfully";

    return 0;
}
