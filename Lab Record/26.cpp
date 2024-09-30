// Program to merge 2 unsorted arrays

#include <iostream>
using namespace std;

int main() {
  int arr1[5] = {1, 3, 5, 7, 9};
  int arr2[5] = {2, 4, 6, 8, 10};
  int arr3[10];
  for (int i = 0; i < 5; i++) {
    arr3[i] = arr1[i];
  }
  for (int i = 0; i < 5; i++) {
    arr3[i + 5] = arr2[i];
  }
  cout << "Merged array: ";
  for (int i = 0; i < 10; i++) {
    cout << arr3[i] << " ";
  }
  return 0;
}