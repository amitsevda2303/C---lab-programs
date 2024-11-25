// Program that uses an overloaded constructor to dynamically allocate memory to
// an array and thus find the largest of its elements

#include <iostream>
using namespace std;

class Array {
  int *arr, size;
 public:
  Array(int s) : size(s) { arr = new int[size]{1, 2, 3, 4, 5}; }
  int findMax() {
    int max = arr[0];
    for (int i = 1; i < size; ++i)
      if (arr[i] > max) max = arr[i];
    return max;
  }
};
int main() {
  Array a(5);
  cout << "Largest element: " << a.findMax() << endl;
  return 0;
}