// operator overloading using unary operator with friend function

#include <iostream>
using namespace std;

class Test{
    private:
        int a,b,c;
    public:
        void getdata(int x,int y,int z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
            cout<<"c = "<<c<<endl;
        }

        friend void operator -(Test &t);
};


void operator -(Test &t){
    t.a = -t.a;
    t.b = -t.b;
    t.c = -t.c;
}

int main(){
    Test t1;
    t1.getdata(10,-20,30);
    cout<<"Before Operator overloading "<<endl;
    t1.display();
    operator -(t1);
    cout<<"After Operator overloading "<<endl;
    t1.display();
}