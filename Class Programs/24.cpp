//Program to overload the binary operator using friend function
#include <iostream>
using namespace std;

class Overload{
    private:
        int real;
        int imag;
    public:
        Overload(int r,int i){
            real = r;
            imag = i;
        }

        void display(){
            cout<<real<<"+i"<<imag<<endl;
        }
        friend Overload operator+(const Overload &c1, const Overload &c2);
};

Overload operator+(const Overload &c1, const Overload &c2) {
    return Overload(c1.real + c2.real, c1.imag + c2.imag);
}

int main(){
    Overload c1(1,2);
    c1.display();
    Overload c2(3,4);
    c2.display();
    Overload c3 = operator+(c1,c2);
    c3.display();
    return 0;
}