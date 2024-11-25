// Program to demonstrate the concept of function overloading in the member functions of a class

#include <iostream>
using namespace std;

class Overload {
 public:
  void display(int a) { cout << "Integer: " << a << endl; }
  void display(double b) { cout << "Double: " << b << endl; }
  void display(char c) { cout << "Character: " << c << endl; }
};

int main() {
  Overload obj;
  obj.display(5);
  obj.display(5.5);
  obj.display('5');
  return 0;
}