// Program of Objects & Classes

#include <iostream>
using namespace std;

class Student {
 private:
  char name[30];
  int age;

 public:
  void getData();
  void display() {
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl;
  }
};

void Student::getData() {
  cout << "Enter Your Name: ";
  cin >> name;
  cout << "Enter Your Age: ";
  cin >> age;
}

int main() {
  Student obj1, obj2, obj3;
  Student s1;
  s1.getData();
  s1.display();
  return 0;
}