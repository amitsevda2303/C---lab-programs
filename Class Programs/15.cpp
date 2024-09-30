// Program of nested member function

#include <iostream>
using namespace std;

class A {
  int a;

 public:
  void setData(int x) { a = x; }
  void display(void) { cout << "The value of a is: " << a << endl; }
  void show(void) {
    display();
    cout << "The value of a is: " << a << endl;
  }
};

int main() {
  A obj;
  obj.setData(10);
  obj.show();
  return 0;
}