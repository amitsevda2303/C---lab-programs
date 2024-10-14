// operator overloading using unary operator with member function

#include <iostream>
using namespace std;

class Test
{
private:
    int a, b, c;

public:
    void getdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void operator-();
    void display()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
        cout << "C = " << c << endl;
    }
};

void Test ::operator-()
{

    a = -a;
    b = -b;
    c = -c;
}

int main()
{
    Test t1;
    t1.getdata(10, 20, 30);
    cout << "Before Operator overloading " << endl;
    t1.display();
    -t1;
    cout << "After Operator overloading " << endl;
    t1.display();
}