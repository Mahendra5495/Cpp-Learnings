//  Implement a basic shape hierarchy (circle, rectangle, triangle) using
//  inheritance
#include <bits/stdc++.h>
using namespace std;

class Shape {
   protected:
    double dimension;
    double area;

   public:
    virtual double calcArea() = 0;
};
class Circle : public Shape {
    // for class cirle - dimension refers radius
    double circm;  // circumference

   public:
    Circle(int radius) { dimension = radius; }
    double calcArea() {
        area = 3.1415 * dimension * dimension;
        return area;
    }
    double calcCircumf() {
        circm = 2 * 3.1415 * dimension;
        return circm;
    }
};
class Rectangle : public Shape {
    // let dimension represent length and dimension2 - breadth
    double dimension2, perimeter;

   public:
    Rectangle(double length, double breadth) {
        dimension = length;
        dimension2 = breadth;
    }
    double calcArea() {
        area = dimension * dimension2;  // len * breadth
        return area;
    }
    double calcPerimeter() {
        perimeter = 2 * (dimension + dimension2);
        return perimeter;
    }
};

class Triangle : public Shape {
    // let dimension represent base of triangle;
    double height;

   public:
    Triangle(double base, double height) {
        dimension = base;
        this->height = height;
    }
    double calcArea() {
        area = (dimension * height) / 2;
        return area;
    }
};
int main() {
    Circle c1 = Circle(10);
    cout << "Circumference of circle: " << c1.calcCircumf() << endl;
    cout << "Area of circle: " << c1.calcArea() << endl;

    cout << endl;
    Rectangle rect = Rectangle(15, 5);
    cout << "Perimeter of rectangle: " << rect.calcPerimeter() << endl;
    cout << "Area of rectangle: " << rect.calcArea() << endl;

    cout << endl;
    Triangle t1 = Triangle(12, 7);
    cout << "Area of Triangle: " << t1.calcArea() << endl;
    return 0;
}
