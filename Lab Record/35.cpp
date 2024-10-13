// add 2 integars using pointer

#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int *ptr1, *ptr2;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    ptr1 = &a;
    ptr2 = &b;
    int sum = *ptr1 + *ptr2;
    cout<<"Sum of 2 numbers using pointer is: "<<sum;

    return 0;
}