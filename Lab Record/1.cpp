// Program to calculate distance between two points
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float x1, x2, y1, y2, dis;
  cout << "Enter the value of x1, x2, y1, y2:" << endl;
  cin >> x1 >> x2 >> y1 >> y2;
  dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  cout << "Distance = " << dis << endl;
  return 0;
}