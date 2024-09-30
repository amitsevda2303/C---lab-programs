// Program to print the following pattern:
/*
    1
   121
  12321
 1234321
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of lines: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << j + 1;
    }
    for (int j = i - 1; j >= 0; j--)
    {
      cout << j + 1;
    }
    cout << endl;
  }
  return 0;
}