// Program to implement linear search in any given array

#include <iostream>
using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n;
  cout << "Enter the number to search: ";
  cin >> n;
  for (int i = 0; i < 10; i++) {
    if (arr[i] == n) {
      cout << "Number found at index: " << i << endl;
      return 0;
    }
  }
  cout << "Number not found" << endl;
  return 0;
}