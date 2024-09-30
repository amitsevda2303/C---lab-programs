// Program to generate calender of a month given the start day and number of days in that month

#include <iostream>
using namespace std;

int main()
{
  int startDay, days;
  cout << "Enter the start day of the month (1-7): ";
  cin >> startDay;
  cout << "Enter the number of days in the month: ";
  cin >> days;
  cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat\n";
  for (int i = 1; i < startDay; i++)
    cout << "\t";
  for (int i = 1; i <= days; i++)
  {
    cout << i << "\t";
    if ((i + startDay - 1) % 7 == 0)
      cout << endl;
  }

  return 0;
}