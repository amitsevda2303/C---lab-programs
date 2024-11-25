// Program to illustrate the use of arrays within structure
#include <iostream>
using namespace std;

struct Student {
  string name;
  int marks[2];
};

int main() {
  Student student;
  student.name = "John Doe";
  student.marks[0] = 85;
  student.marks[1] = 90;

  cout << "Student Name: " << student.name << endl;
  cout << "Marks: ";
  for (int i = 0; i < 2; ++i) {
    cout << student.marks[i] << ", ";
  }
  return 0;
}