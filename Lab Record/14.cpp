// Program to calculate average of first n natural numbers using for loop

#include <iostream>
using namespace std;

int main()
{
  float n, sum = 0;
  cout << "Enter the number of elements: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  cout << "Average of first " << n << " natural numbers is: " << sum / n;
  return 0;
}