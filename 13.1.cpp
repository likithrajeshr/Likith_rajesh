#include <iostream>
#include <memory>
#include <string>
using namespace std;

// Abstract base class
struct Shape {
    virtual double area() const = 0;
    virtual ~Shape() {}
};

// Circle class
struct Circle : Shape {
    double r;

    Circle(double r) : r(r) {}

    double area() const override {
        return 3.14159 * r * r;
    }
};

// Square class
struct Square : Shape {
    double s;

    Square(double s) : s(s) {}

    double area() const override {
        return s * s;
    }
};

// Factory function
unique_ptr<Shape> makeShape(const string &kind) {
    if (kind == "circle")
        return make_unique<Circle>(2.0);

    return make_unique<Square>(3.0);
}

int main() {
    auto a = makeShape("circle");
    auto b = makeShape("square");

    cout << "area a = " << a->area()
         << ", area b = " << b->area() << endl;

    return 0;
}
