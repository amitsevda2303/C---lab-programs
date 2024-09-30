// Program of friend function

#include <iostream>
using namespace std;

class B;

class A {
  int a;

 public:
  A() { a = 5; }
  friend void show(A, B);
};

class B {
  int b;

 public:
  B() { b = 10; }
  friend void show(A, B);
};

void show(A x, B y) {
  cout << "The value of a is: " << x.a << endl;
  cout << "The value of b is: " << y.b << endl;
}

int main() {
  A a;
  B b;
  show(a, b);
  return 0;
}
