#include <iostream>
#include <string>
using namespace std;

class Logger {
public:
    virtual void write(string msg) = 0;
};

class ConsoleLogger : public Logger {
public:
    void write(string msg) override {
        cout << "Console Logger: " << msg << endl;
    }
};

class FileLogger : public Logger {
public:
    void write(string msg) override {
        cout << "File Logger: " << msg << endl;
    }
};

int main() {
    ConsoleLogger c;
    FileLogger f;

    Logger* logger;

    logger = &c;
    logger->write("Hello World");

    logger = &f;
    logger->write("Hello World");

    return 0;
}
