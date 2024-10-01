//program to read and display 2*2*2 matrix
#include <iostream>
using namespace std;

int main() {
    int array[2][2][2];

    cout << "Enter 8 elements for the 2x2x2 array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cin >> array[i][j][k];
            }
        }
    }

    
    cout << "\nThe 2x2x2 array is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << array[i][j][k];
            }
            cout<<endl;
        }
    }

    return 0;
}
