#include <iostream>
#include <cstring>
using namespace std;

class Text {
    char *buf;

public:
    Text(const char *s = "") 
    { 
        buf = new char[strlen(s)+1]; 
        strcpy(buf, s); 
    }

    Text(const Text &o) 
    { 
        buf = new char[strlen(o.buf)+1]; 
        strcpy(buf, o.buf); }

    Text& operator=(const Text &o) 
    {              // deep-copy assignment
        if (this != &o) 
        {                         // guard against self-assignment
            delete[] buf;                         // free old memory
            buf = new char[strlen(o.buf)+1];
            strcpy(buf, o.buf);
        }
        return *this;                             // enables a = b = c
    }

    ~Text() { delete[] buf; }

    void show() const { cout << buf << endl; }
};

int main() {
    Text a("alpha"), b("beta");

    b = a;                                        // = operator: runs → deep copy

    a.show();
    b.show();

    return 0;
}
