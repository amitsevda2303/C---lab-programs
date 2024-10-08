// operator overloading through binary operator using member function
#include <iostream>
using namespace std;

class Overload{
    private:
        int real;
        int imag;
    public:
        Overload(float r, float i){
            real = r;
            imag = i;
        }
        Overload operator +(Overload &c){
            return Overload(real+c.real , imag+c.imag);
        } 

        void display(){
            cout<<real<<"+i"<<imag<<endl;
        }
};


int main(){
    Overload c1(4.00,3.00);
    c1.display();
    Overload c2(5.00,5.00);
    c2.display();
    Overload c3 = c1+c2;
    c3.display();

    return 0;
}