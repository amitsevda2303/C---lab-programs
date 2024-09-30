// Program to calculate exp (x, y) using recursive function

#include <iostream>
using namespace std;

int exp(int x, int y)
{
  if (y == 0)
    return 1;
  return x * exp(x, y - 1);
}

int main()
{
  int x, y;
  cout << "Enter the base and exponent: ";
  cin >> x >> y;
  cout << "The result of " << x << " raised to the power " << y << " is: " << exp(x, y) << endl;
  return 0;
}
