// Program to display the list of students according to their marks
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Student {
  string name;
  int marks;
};

bool compareMarks(const Student &a, const Student &b) { return a.marks > b.marks; }

int main() {
  vector<Student> students = {
      {"Alice", 85}, {"Bob", 95}, {"Charlie", 75}, {"David", 90}, {"Eve", 80}};

  sort(students.begin(), students.end(), compareMarks);

  cout << "List of students according to their marks:" << endl;
  for (const auto &student : students) {
    cout << student.name << ": " << student.marks << endl;
  }

  return 0;
}