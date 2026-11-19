#include <iostream>
#include <exception>
#include <string>
using namespace std;

class InvalidAge : public exception {
    string msg;

public:
    InvalidAge(int a) : msg("Invalid age: " + to_string(a)) {}

    const char* what() const noexcept override {
        return msg.c_str();
    }
};

void registerVoter(int age) {
    if (age < 0)
        throw InvalidAge(age);

    if (age < 18)
        throw string("Too young to vote");

    cout << "Registered (age " << age << ")\n";
}

int main() {
    int ages[] = {25, 15, -3};

    for (int a : ages) {
        try {
            registerVoter(a);
        }
        catch (const InvalidAge &e) {
            cout << "[ERR] " << e.what() << endl;
        }
        catch (const string &s) {
            cout << "[WARN] " << s << endl;
        }
        catch (...) {
            cout << "[ERR] unknown\n";
        }
    }

    return 0;
}
