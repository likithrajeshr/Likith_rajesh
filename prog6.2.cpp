#include <iostream>
#include <cstring>
using namespace std;

class Text {
    char *buf;
public:
    // Constructor
    Text(const char *s = "") {
        buf = new char[strlen(s) + 1];
        strcpy(buf, s);
    }

    // Copy Constructor
    Text(const Text &o) : buf(new char[strlen(o.buf) + 1]) {
        strcpy(buf, o.buf);
    }

    // Deep-copy Assignment Operator
    Text& operator=(const Text &o) {
        if (this != &o) {                   // Guard against self-assignment (a = a)
            delete[] buf;                   // Free old memory
            buf = new char[strlen(o.buf) + 1];
            strcpy(buf, o.buf);
        }
        return *this;                       // Enables assignment chaining (a = b = c)
    }

    // Destructor
    ~Text() {
        delete[] buf;
    }

    void show() const {
        cout << buf << endl;
    }
};

int main() {
    Text a("alpha"), b("beta");
    b = a; // operator= runs -> deep copy

    a.show();
    b.show();

    return 0;
}
