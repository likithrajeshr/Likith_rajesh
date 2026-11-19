#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;

void appendLog(const string &file, const string &entry) {
    ofstream log(file, ios::app);

    if (!log)
        throw runtime_error("log open failed: " + file);

    log << entry << "\n";
}

int main() {
    try {
        appendLog("run.log", "TEST started");
        appendLog("run.log", "TEST passed");

        ifstream in("run.log");

        if (!in)
            throw runtime_error("cannot read run.log");

        string line;
        int lines = 0;

        while (getline(in, line))
            ++lines;

        cout << "run.log now has " << lines << " line(s)\n";
    }
    catch (const exception &e) {
        cerr << "I/O error: " << e.what() << endl;
    }

    return 0;
}
