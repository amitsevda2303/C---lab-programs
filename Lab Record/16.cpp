// Program to display the largest of 10 numbers using ternary operator

#include <iostream>
using namespace std;

int main()
{
  int n, max;
  cout << "Enter the number 1: ";
  cin >> max;
  for (int i = 2; i <= 10; i++)
  {
    cout << "Enter the number " << i << ": ";
    cin >> n;
    max = (n > max) ? n : max;
  }
  cout << "Largest number: " << max << endl;
  return 0;
}