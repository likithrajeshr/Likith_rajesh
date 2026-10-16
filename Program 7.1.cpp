#include <iostream>
#include <string>
using namespace std;

class Device {
    string id;

public:
    Device(string i) : id(i) {
        cout << "Device " << id << " ctor\n";
    }

    ~Device() {
        cout << "Device dtor\n";
    }

    void info() const {
        cout << "ID=" << id;
    }
};

class Sensor : public Device {
    string type;

public:
    Sensor(string i, string t) : Device(i), type(t) {
        cout << "Sensor ctor\n";
    }

    void info() const {
        Device::info();
        cout << " type=" << type;
    }
};

class TempSensor : public Sensor {
    double celsius;

public:
    TempSensor(string i, double c)
        : Sensor(i, "TEMP"), celsius(c) {
        cout << "TempSensor ctor\n";
    }

    void show() const {
        info();
        cout << " val=" << celsius << " C\n";
    }
};

int main() {
    TempSensor t("U1", 36.5);

    t.show();

    return 0;
}
