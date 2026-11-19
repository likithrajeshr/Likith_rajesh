#include <iostream>
#include <string>
using namespace std;

class Logger {
    Logger() {}

public:
    Logger(const Logger&) = delete;

    void operator=(const Logger&) = delete;

    static Logger& get() {
        static Logger instance;
        return instance;
    }

    void log(const string &m) {
        cout << "[LOG] " << m << endl;
    }
};

int main() {
    Logger::get().log("system up");

    Logger::get().log("same single instance");

    return 0;
}
