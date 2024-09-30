// Program of dynamic memory allocation

#include <iostream>
using namespace std;

int main() {
  int* ptr = new int;
  if (!ptr) {
    cout << "Memory allocation failed" << endl;
  } else {
    *ptr = 29;
    cout << "Value of ptr is: " << *ptr << endl;
    delete ptr;
  }
  return 0;
}