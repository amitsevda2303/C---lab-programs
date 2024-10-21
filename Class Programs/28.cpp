// hybrid inheritence
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

class Sports
{
protected:
    float score;
public:
    void get_Score(float a){
        score = a;
    }
    void put_Score(){
        cout<<"Score in sports = "<<score<<endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void showData()
    {
        total = m1 + m2 + score;
        put_rollnumber();
        put_marks();
        put_Score();
        cout << "Total with marks and score = " << total << endl;
    }
};

int main()
{
    Result obj;
    obj.get_rollnumber(46);
    obj.get_marks(10.51, 10.99);
    obj.get_Score(55.50);
    obj.showData();
    return 0;
}