// Program to overload the increment and decrement operators on the array class

#include <iostream>
using namespace std;

class Array {
  int arr[5] = {1, 2, 3, 4, 5};

 public:
  void operator++() {
    for (int &x : arr) ++x;
  }
  void operator--() {
    for (int &x : arr) --x;
  }
  void display() {
    for (int x : arr) cout << x << " ";
    cout << endl;
  }
};

int main() {
  Array a;
  ++a;
  cout << "After incrementing: ";
  a.display();
  --a;
  cout << "After decrementing: ";
  a.display();
  return 0;
}