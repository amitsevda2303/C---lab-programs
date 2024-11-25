#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num, den;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;

    if (den == 0) {
        cout << "Denominator cannot be zero." << endl;
        return 1;
    }

    int gc = gcd(num, den);
    num /= gc;
    den /= gc;
    cout << "Simplified rational number: " << num << "/" << den << endl;

    return 0;
}
