// Program to calculate area of circle using functions

#include <iostream>
using namespace std;

float areaOfCircle(int r)
{
  float area = 3.14 * (r * r);
  return area;
}

int main()
{
  int r;
  cout << "Enter the radius of the circle: ";
  cin >> r;
  cout << "Area of Circle: " << areaOfCircle(r);
  return 0;
}