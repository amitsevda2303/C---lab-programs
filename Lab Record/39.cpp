#include <iostream>
using namespace std;

// Defining a structure for Address
struct Address {
    string street;
    string city;
    int zipCode;
};

struct Student {
    string name;
    int rollNumber;
    Address address;
};

int main() {
    Student student;

    cout << "Enter student's name: ";
    getline(cin, student.name);

    cout << "Enter roll number: ";
    cin >> student.rollNumber;

    cin.ignore();
    cout << "Enter street: ";
    getline(cin, student.address.street);

    cout << "Enter city: ";
    getline(cin, student.address.city);

    cout << "Enter zip code: ";
    cin >> student.address.zipCode;

    cout << "\n--- Student Information ---" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Address: " << student.address.street << ", " 
         << student.address.city << " - " << student.address.zipCode << endl;

    return 0;
}

