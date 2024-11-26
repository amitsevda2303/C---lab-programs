#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void findNextDate(int &day, int &month, int &year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    
    day++;
    
    if (day > daysInMonth[month - 1]) {
        day = 1;         
        month++;         
        
        if (month > 12) {
            month = 1;   
            year++;      
        }
    }
}

int main() {
    int day, month, year;

    cout << "Enter the current date (day month year): ";
    cin >> day >> month >> year;

    if (month < 1 || month > 12 || day < 1 || 
        day > (isLeapYear(year) && month == 2 ? 29 : (month == 2 ? 28 : (31 - (month - 1) % 7 % 2)))) {
        cout << "Invalid date input!" << endl;
        return 1;
    }

    findNextDate(day, month, year);

    cout << "The next date is: " << day << "/" << month << "/" << year << endl;

    return 0;
}
