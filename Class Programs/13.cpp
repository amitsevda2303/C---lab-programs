// Program of inline function

#include <iostream>
using namespace std;

inline int product(int a, int b) { return a * b; }

int main() {
  int x, y;
  cout << "Enter the value of x and y: ";
  cin >> x >> y;
  cout << "The product of x and y is: " << product(x, y) << endl;
  return 0;
}