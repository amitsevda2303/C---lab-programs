// Program to sum the series 1/1 + 2**2/2 + 3**3/3 + n**n/n
// 1 + 2 + 9 + 64 + 625 + ...

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  int sum = 0;
  cout << "Enter the number of elements: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum += ((pow(i, i)) / i);
  }
  cout << "Sum of the series: " << sum;
  return 0;
}