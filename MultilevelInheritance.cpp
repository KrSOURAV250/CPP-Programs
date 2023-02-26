#include <iostream>
using namespace std;
class Student
{
protected:
    int rollNo;
    string name;

public:
    void setRollNo(int a)
    {
        rollNo = a;
    }
    void setName(string b)
    {
        name = b;
    }
    int getRollNo()
    {
        return rollNo;
    }
    string getName()
    {
        return name;
    }
};
class exam : public Student
 
{
protected:
    float math;
    float science;

public:
    void setMarks(float m1, float m2)
    {
        math = m1;
        science = m2;
    }
    float getMath()
    {
        return math;
    }
    float getScience()
    {
        return science;
    }
    void showMarks()
    {
        cout << "The Marks in Maths are : " << math << endl
             << "The Marks in Science are : " << science << endl;
    }
};

class result : public exam
{
public:
    void reslt()
    {

        cout << "The Result of " << name << " and Roll No. " << rollNo << " is : " << (math + science) / 2 << "%" << endl;
    }
};
int main(int argc, char const *argv[])
{
    result r;
    r.setRollNo(25);
    r.setName("Kr. SOURAV");
    r.setMarks(99, 98);
    r.showMarks();
    r.reslt();

    return 0;
}
