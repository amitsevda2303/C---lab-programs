// Program of friend Class

#include <iostream>
using namespace std;

class B;

class A {
 private:
  int a;

 public:
  void setData(int x) { a = x; }
  friend class B;
};

class B {
 private:
  int b;

 public:
  void setData(int y) { b = y; }
  void showData(A obj) {
    cout << "Class A data: " << obj.a << endl;
    cout << "Class B data: " << b << endl;
  }
};

int main() {
  A obj1;
  B obj2;
  obj1.setData(10);
  obj2.setData(20);
  obj2.showData(obj1);
  return 0;
}