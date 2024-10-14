// program to display , display , add and substract two complex numbers

#include <iostream>
using namespace std;

class Test
{
private:
    int real;
    int imag;

public:
    Test()
    {
        real = 0;
        imag = 0;
    }
    Test(int x, int y)
    {
        real = x;
        imag = y;
    }
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display()
    {
        cout << real << "+i" << imag << endl;
    }
    friend Test operator+(const Test &t1, const Test &t2);
    friend Test operator-(const Test &t1, const Test &t2);
    friend Test operator*(const Test &t1, const Test &t2);
};

Test operator+(const Test &t1, const Test &t2)
{
    return Test(t1.real + t2.real, t1.imag + t2.imag);
}
Test operator-(const Test &t1, const Test &t2)
{
    return Test(t1.real - t2.real, t1.imag - t2.imag);
}
Test operator*(const Test &t1, const Test &t2)
{
    int realpart = t1.real * t2.real - t1.imag * t2.imag;
    int imagpart = t1.real * t2.imag + t1.imag * t2.real;
    return Test(realpart, imagpart);
}

int main()
{
    Test t1;
    Test t2;
    cout << "Enter the first complex number:\n";
    t1.input();
    cout << "Enter the second complex number:\n";
    t2.input();
    Test t3;
    t3 = operator+(t1, t2);
    cout << "\nSum: ";
    t3.display();
    t3 = operator-(t1, t2);
    cout << "Difference: ";
    t3.display();
    t3 = operator*(t1, t2);
    cout << "Product: ";
    t3.display();
    return 0;
}