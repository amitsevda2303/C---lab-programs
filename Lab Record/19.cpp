// Program to calculate the volume of cuboid using default arguments

#include <iostream>
using namespace std;

float volumeOfCuboid(int l, int b, int h = 1)
{
  float volume = l * b * h;
  return volume;
}

int main()
{
  int l, b;
  cout << "Enter the length and breadth of the cuboid:" << endl;
  cin >> l >> b;
  cout << "Volume of the cuboid is: " << volumeOfCuboid(l, b) << endl;
  return 0;
}