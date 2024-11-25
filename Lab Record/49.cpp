// Program to add 2 arrays using friend function and operator overloading

#include <iostream>
using namespace std;

class Array {
  int arr[3];

 public:
  Array(int a, int b, int c) {
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
  }
  friend Array operator+( Array &a1, Array &a2) {
    return Array(a1.arr[0] + a2.arr[0], a1.arr[1] + a2.arr[1],
                 a1.arr[2] + a2.arr[2]);
  }
  void display() { cout << arr[0] << " " << arr[1] << " " << arr[2] << endl; }
};

int main() {
  Array a1(1, 2, 3), a2(4, 5, 6);
  Array a3 = a1 + a2;
  cout << "Sum: ";
  a3.display();
  return 0;
}