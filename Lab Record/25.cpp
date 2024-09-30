// Program to find the second largest number using an array of n numbers

#include <iostream>
using namespace std;

int main() {
  int n = 5;
  int arr[n] = {1, 2, 3, 4, 5};
  int largest = arr[0];
  int second_largest = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      second_largest = largest;
      largest = arr[i];
    } else if (arr[i] > second_largest && arr[i] != largest) {
      second_largest = arr[i];
    }
  }

  cout << "Second largest number is: " << second_largest << endl;

  return 0;
}