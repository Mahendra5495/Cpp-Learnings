// Create a program that uses operator overloading to add two complex numbers.
#include <bits/stdc++.h>
using namespace std;

class Complex {
    float real, img;

   public:
    Complex() : real(0), img(0) {}
    void input() {
        cout << "Enter real and img part respectively: ";
        cin >> real >> img;
    }
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
    void display() { cout << real << " + " << img << "i" << endl; }
};
int main() {
    Complex c1, c2, result;
    c1.input();
    c2.input();
    result = c1 + c2;
    result.display();
    return 0;
}
