// Program to classify a given number as prime or composite

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the number: ";
  cin >> num;
  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      cout << num << " is a composite number!";
      return 0;
    }
  }
  cout << num << " is a prime number!";
  return 0;
}