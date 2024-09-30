// Program to swap two variables without using a temporary variable

#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int b = 10;

  cout << "Before-:" << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  a = a + b;
  b = a - b;
  a = a - b;

  cout << "After-:" << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  return 0;
}