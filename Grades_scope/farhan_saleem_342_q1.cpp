#include <string>
using namespace std;

class Shape {
private:
    string colour;

public:
    Shape() {}

    Shape(const string& c) {
        colour = c;
    }

    string getColour() const {
        return colour;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle() {}

    Rectangle(double l, double w, const string& c) : Shape(c) {
        length = l;
        width = w;
    }

    double calculateArea() const {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle() {}

    Circle(double r, const string& c) : Shape(c) {
        radius = r;
    }

    double calculateArea() const {
        return 3.14 * radius * radius;
    }
};

class Driver {
public:
    static double totalArea(const Rectangle& r, const Circle& c) {
        return r.calculateArea() + c.calculateArea();
    }

    static string maxAreaColour(const Rectangle& r, const Circle& c) {
        double rectArea = r.calculateArea();
        double circArea = c.calculateArea();

        if (rectArea > circArea) {
            return r.getColour();
        } else {
            return c.getColour();
        }
    }
};
