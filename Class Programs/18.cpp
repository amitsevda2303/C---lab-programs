// Program of parameterized constructor

#include <iostream>
using namespace std;

class construct {
 public:
  int a, b;
  construct(int x, int y) {
    a = x;
    b = y;
  }
};

int main() {
  construct c(10, 20);
  cout << "a: " << c.a << endl;
  cout << "b: " << c.b << endl;
  return 0;
}