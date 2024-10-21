//multiple inheritence
#include <iostream>
using namespace std;

class Base{
    protected:
        int n;
    public:
        void get_n(int);
};

class Base2{
    protected:
        int m;
    public:
        void get_m(int);
};
void Base:: get_n(int x){
    n = x;
}
void Base2:: get_m(int x){
    m = x;
}

class Derived : public Base , public Base2{
    public:
        int total;
        void display(){
            cout<<"N = " <<n<<endl;
            cout<<"M = " <<m<<endl;
            cout<<"Multiplication =" <<m*n;
        }
};

int main(){
    Derived obj;
    obj.get_n(10);
    obj.get_m(10);
    obj.display();
    return 0;
}