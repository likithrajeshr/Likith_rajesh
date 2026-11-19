#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;

public:
    Circle(double r) : r(r) {}

    double area() const override {
        return 3.14159 * r * r;
    }
};

class Square : public Shape {
    double s;

public:
    Square(double s) : s(s) {}

    double area() const override {
        return s * s;
    }
};

class Triangle : public Shape {
    double b, h;

public:
    Triangle(double b, double h) : b(b), h(h) {}

    double area() const override {
        return 0.5 * b * h;
    }
};

unique_ptr<Shape> makeShape(string kind) {
    if (kind == "circle")
        return make_unique<Circle>(2.0);

    else if (kind == "square")
        return make_unique<Square>(3.0);

    else if (kind == "triangle")
        return make_unique<Triangle>(4.0, 5.0);

    return nullptr;
}

int main() {
    vector<unique_ptr<Shape>> shapes;

    shapes.push_back(makeShape("circle"));
    shapes.push_back(makeShape("square"));
    shapes.push_back(makeShape("triangle"));

    for (auto &s : shapes) {
        if (s)
            cout << "Area: " << s->area() << endl;
    }

    return 0;
}
