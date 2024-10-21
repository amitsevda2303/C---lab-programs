//single inheritence
#include <iostream>
using namespace std;

class Base {
    private:
        int a;
    public:
        int b;
        void get_ab();
        int get_a();
        void show_a();
};

class Derived : public Base{
    private: 
        int c;
    public :
        void multiplication();
        void display(){
            show_a();
            cout<<"B ="<<b<<endl;
            cout<<"C = "<<c;
        }
};

void Base :: get_ab(){
    a =10;
    b = 20;
}
int  Base :: get_a(){
    return a;
}
void Base :: show_a(){
    cout<<"A = " << a<<endl;
}
void Derived :: multiplication(){
    c = get_a() * b;
}


int main(){
    Derived obj;
    obj.get_ab();
    obj.multiplication();
    obj.display();
    return 0;
}