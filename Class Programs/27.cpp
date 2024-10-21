//multilevel inheritence
#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void get_rollnumber(int x)
    {
        rollNumber = x;
    }
    void put_rollnumber()
    {
        cout << "Roll Number = " << rollNumber << endl;
    }
};

class Test : public Student
{
protected:
    float m1, m2;

public:
    void get_marks(float a, float b)
    {
        m1 = a;
        m2 = b;
    }
    void put_marks()
    {
        cout << "Marks in first subject: " << m1 << endl;
        cout << "Marks in second subject: " << m2 << endl;
    }
};

class Result : public Test
{
private:
    float total;
public: 
    void showData(){
        total = m1+m2;
        put_rollnumber();
        put_marks();
        cout<<"Total = "<<total<<endl;
    }
};

int main(){
    Result obj;
    obj.get_rollnumber(46);
    obj.get_marks(10.51 , 10.99);
    obj.showData();
    return 0;
}