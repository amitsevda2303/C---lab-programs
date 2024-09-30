// Program to convert an integer into corresponding floating point number

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter an integer: ";
  cin >> n;
  cout << "The floating point number is: " << static_cast<float>(n) << endl;
  return 0;
}