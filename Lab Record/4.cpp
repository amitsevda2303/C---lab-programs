// Program to swap two variables using a temporary variable

#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int b = 10;
  int temp;

  cout << "Before-:" << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  temp = a;
  a = b;
  b = temp;

  cout << "After-:" << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  return 0;
}