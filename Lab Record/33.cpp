#include <iostream>
#include <string>

using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    string studentNames[100];

    for (int i = 0; i < numStudents; ++i) {
        cin >> ws; 
        getline(cin, studentNames[i]);
    }

    for (int i = 0; i < numStudents - 1; ++i) {
        for (int j = 0; j < numStudents - i - 1; ++j) {
            if (studentNames[j] > studentNames[j + 1]) {
                string temp = studentNames[j];
                studentNames[j] = studentNames[j + 1];
                studentNames[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted list of student names: " << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << studentNames[i] << endl;
    }

    return 0;
}
