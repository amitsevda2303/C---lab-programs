#include <iostream>
using namespace std;

class Distance {
  int feet;
  float inches;

 public:
  // Parameterized constructor
  Distance(int f, float i) : feet(f), inches(i) {}

  // Conversion operator: Convert Distance to total inches (float)
  operator float() const { return feet * 12 + inches; }
};

int main() {
  int feet;
  float inches;

  // Input distance from the user
  cout << "Enter feet: ";
  cin >> feet;
  cout << "Enter inches: ";
  cin >> inches;

  // Create the Distance object dynamically
  Distance* d = new Distance(feet, inches);

  // Convert to float (total inches) using the conversion operator
  float total_inches = *d;
  cout << "Total inches: " << total_inches << " inches" << endl;

  // Clean up dynamic memory
  delete d;

  return 0;
}
