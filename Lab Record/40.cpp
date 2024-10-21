#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

void inputStudentInfo(Student &student) {
    cout << "Enter student's name: ";
    cin.ignore();
    getline(cin, student.name);
    
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    
    cout << "Enter marks: ";
    cin >> student.marks;
}

void displayStudentInfo(const Student &student) {
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;
    cout << "----------------------" << endl;
}

int main() {
    int numberOfStudents;
    
    cout << "Enter the number of students in the class: ";
    cin >> numberOfStudents;
    
    vector<Student> students(numberOfStudents);

    for (int i = 0; i < numberOfStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        inputStudentInfo(students[i]);
    }

    cout << "\n--- Student Information ---" << endl;
    for (int i = 0; i < numberOfStudents; i++) {
        displayStudentInfo(students[i]);
    }

    return 0;
}
