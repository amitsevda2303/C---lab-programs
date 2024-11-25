// Program to find the next date using unary increment operator

#include <iostream>
using namespace std;

class Date {
  int day, month, year;

 public:
  Date(int d, int m, int y) : day(d), month(m), year(y) {}
  void display() { cout << day << "/" << month << "/" << year << endl; }
  void operator++() {
    day++;
    if (day > 30) {
      day = 1;
      month++;
      if (month > 12) {
        month = 1;
        year++;
      }
    }
  }
};

int main() {
  Date date(30, 12, 2021);
  ++date;
  date.display();
  return 0;
}