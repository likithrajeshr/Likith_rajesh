#include <iostream>
#include <exception>
using namespace std;

struct NetworkError : exception {
    const char* what() const noexcept override {
        return "network error";
    }
};

struct TimeoutError : NetworkError {
    const char* what() const noexcept override {
        return "timeout";
    }
};

void fetch(int ms) {
    if (ms > 100)
        throw TimeoutError();

    cout << "fetched in " << ms << " ms\n";
}

int main() {
    for (int d : {50, 200}) {
        try {
            fetch(d);
        }
        catch (const NetworkError &e) {
            cout << "caught: " << e.what() << endl;
        }
    }

    return 0;
}
