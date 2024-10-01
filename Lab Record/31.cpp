// program to check two strings are equal  or not
#include <iostream>
#include <string> 
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    if (str1 == str2) {
        cout << "The strings are equal." << endl;
    }else {
        cout << "The strings are not equal." << endl;
    }

    return 0;
}
