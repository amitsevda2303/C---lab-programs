// Program to display the name of the colors using enumerated types

#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
  Color color = RED;
  cout << "The color is: ";
  switch (color) {
    case RED:
      cout << "Red";
      break;
    case GREEN:
      cout << "Green";
      break;
    case BLUE:
      cout << "Blue";
      break;
  }
  return 0;
}