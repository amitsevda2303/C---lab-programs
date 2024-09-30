// Program to implement destructor

#include <iostream>
using namespace std;

class construct {
 public:
  int a, b;
  construct(int x, int y) {
    a = x;
    b = y;
  }
  ~construct() { cout << "Destructor called" << endl; }
};

int main() {
  construct c1(10, 20);
  cout << "a: " << c1.a << endl;
  cout << "b: " << c1.b << endl;
  return 0;
}