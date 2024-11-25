// Program using pointer to structure to initialize the members in the structure

#include <iostream>
using namespace std;

struct Student {
  string name;
  int age;
};

int main() {
  Student s;
  Student* ptr = &s;
  ptr->name = "John Doe";
  ptr->age = 20;
  cout << "Name: " << ptr->name << endl;
  cout << "Age: " << ptr->age << endl;
  return 0;
}