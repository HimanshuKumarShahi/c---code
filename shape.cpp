#include <iostream>
#include <cmath>

using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual functions for area and perimeter
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;  // Area of the circle: π * r^2
    }

    double perimeter() const override {
        return 2 * M_PI * radius;  // Perimeter (circumference) of the circle: 2 * π * r
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;  // Area of the rectangle: width * height
    }

    double perimeter() const override {
        return 2 * (width + height);  // Perimeter of the rectangle: 2 * (w + h)
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double a, b, c;  // Sides of the triangle

public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() const override {
        // Using Heron's formula to calculate the area of the triangle
        double s = (a + b + c) / 2;  // Semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c));  // Heron's formula
    }

    double perimeter() const override {
        return a + b + c;  // Perimeter of the triangle: sum of the sides
    }
};

int main() {
    // Creating objects of Circle, Rectangle, and Triangle
    Shape* shapes[3];
    
    shapes[0] = new Circle(5.0);           // Circle with radius 5
    shapes[1] = new Rectangle(4.0, 6.0);   // Rectangle with width 4 and height 6
    shapes[2] = new Triangle(3.0, 4.0, 5.0); // Right-angled Triangle with sides 3, 4, 5
    
    // Display area and perimeter for each shape
    for (int i = 0; i < 3; ++i) {
        cout << "Shape " << i+1 << ":\n";
        cout << "Area: " << shapes[i]->area() << endl;
        cout << "Perimeter: " << shapes[i]->perimeter() << endl << endl;
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
