// Program that adds 2 complex numbers. The object must be passed through preference and the result must be passed by value

#include <iostream>
using namespace std;

class Complex {
  int real, imag;

 public:
  Complex(int r = 0, int i = 0) {
    real = r;
    imag = i;
  }

  Complex add(Complex c) {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
  }

  void display() { cout << real << " + i" << imag << endl; }
};

int main() {
  Complex c1(3, 4), c2(5, 6), c3;
  c3 = c1.add(c2);
  c3.display();
  return 0;
}