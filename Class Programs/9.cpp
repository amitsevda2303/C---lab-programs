// Program of nested if-else

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  if (i < 5) {
    cout << "Hello World" << endl;
    i++;
    if (i == 5) {
      cout << "Goodbye World" << endl;
    } else {
      cout << "Hello World" << endl;
    }
  } else {
    cout << "Goodbye World" << endl;
  }
  return 0;
}