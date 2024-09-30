// Program to calculate binary equivalent of a decimal number

#include <iostream>
using namespace std;

int main()
{
  int n, binary = 0, i = 1;
  cout << "Enter a decimal number: ";
  cin >> n;
  while (n > 0)
  {
    binary += (n % 2) * i;
    n /= 2;
    i *= 10;
  }
  cout << "Binary equivalent: " << binary << endl;
  return 0;
}