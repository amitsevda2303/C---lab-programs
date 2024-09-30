// Program of copy constructor

#include <iostream>
using namespace std;

class construct {
 public:
  int a, b;
  construct(int x, int y) {
    a = x;
    b = y;
  }
  construct(const construct &c) {
    a = c.a;
    b = c.b;
  }
};

int main() {
  construct c1(10, 20);
  construct c2 = c1;
  cout << "a: " << c2.a << endl;
  cout << "b: " << c2.b << endl;
  return 0;
}