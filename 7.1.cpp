#include <iostream>
#include <string>
using namespace std;

class Device {                         // base
    string id;
public:
    Device(string i) : id(i) { cout << "Device " << id << " ctor\n"; }
    ~Device() { cout << "Device dtor\n"; }
    void info() const { cout << "ID=" << id; }
};

class Sensor : public Device {         // Sensor IS-A Device
    string type;
public:
    Sensor(string i, string t) : Device(i), type(t) { cout << "Sensor ctor\n"; }
    void info() const { Device::info(); cout << " type=" << type; }
};

class TempSensor : public Sensor {     // TempSensor IS-A Sensor IS-A Device
    double celsius;
public:
    TempSensor(string i, double c) : Sensor(i, "TEMP"), celsius(c)
    {
        cout << "TempSensor ctor\n";
    }
    ~TempSensor() { cout << "TempSensor dtor\n"; }
    void show() const { info(); cout << " val=" << celsius << "\n"; }
};

int main() {
    TempSensor ts("U1", 36.5);   // ctors run base -> derived
    ts.show();
    return 0;                     // dtors run derived -> base
}
