// Program to add two values of different data types using static polymorphism

#include <iostream>
using namespace std;

template <class T1, class T2>
T1 add(T1 a, T2 b)
{
  return a + b;
}

int main()
{
  int a = 10;
  float b = 20.5;
  cout << "Sum of " << a << " and " << b << " is: " << add(a, b) << endl;
  return 0;
}