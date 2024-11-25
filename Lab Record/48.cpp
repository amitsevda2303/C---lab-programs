// Program to find mean of 2 numbers belonging to two different classes using friend function.

#include <iostream>
using namespace std;

class ClassB;

class ClassA {
  int numA;

 public:
  ClassA(int a) : numA(a) {}
  friend float findMean(ClassA, ClassB);
};

class ClassB {
  int numB;

 public:
  ClassB(int b) : numB(b) {}
  friend float findMean(ClassA, ClassB);
};

float findMean(ClassA objA, ClassB objB) {
  return (objA.numA + objB.numB) / 2.0;
}

int main() {
  ClassA objA(10);
  ClassB objB(20);
  cout << "Mean: " << findMean(objA, objB) << endl;
  return 0;
}