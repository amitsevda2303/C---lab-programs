// demonstrates the use of a dynamic constructor to allocate memory to an array and counts the number of even and odd elements:
#include <iostream>
using namespace std;

class Array {
    int* arr;      // Pointer to dynamically allocate array
    int size;      // Size of the array

public:
    // Constructor to dynamically allocate memory
    Array(int s) {
        size = s;
        arr = new int[size];
    }

    // Method to input elements into the array
    void inputElements() {
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    // Method to count even and odd elements
    void countEvenOdd() {
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] % 2 == 0) {
                ++evenCount;
            } else {
                ++oddCount;
            }
        }
        cout << "Number of even elements: " << evenCount << endl;
        cout << "Number of odd elements: " << oddCount << endl;
    }

    // Destructor to deallocate memory
    ~Array() {
        delete[] arr;
        cout << "Memory deallocated." << endl;
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    // Create an object of the Array class
    Array myArray(n);

    // Input elements into the array
    myArray.inputElements();

    // Count and display even and odd elements
    myArray.countEvenOdd();

    return 0;
}
