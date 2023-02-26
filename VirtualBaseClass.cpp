#include <iostream>
using namespace std;
class student
{
protected:
    int rollNo;

public:
    void setRollNo(int a)
    {
        rollNo = a;
    }
    void printRollNo()
    {
        cout << "Roll No. : " << rollNo << endl;
    }
};
class test : public virtual student
{
protected:
    int mathsMarks;
    int scienceMarks;

public:
    void setMarks(int m1, int m2)
    {
        mathsMarks = m1;
        scienceMarks = m2;
    }
    void printMarks()
    {
        cout << "Maths Marks : " << mathsMarks << endl
             << "Science Marks : " << scienceMarks << endl;
    }
};
class sports : public virtual student
{
protected:
    int sportsScore;

public:
    void setScore(int a)
    {
        sportsScore = a;
    }
    void printScore()
    {
        cout << "Sports Score : " << sportsScore << endl;
    }
};
class result : public test, public sports
{

public:
    void printResult()
    {
        cout << "Your Result is :-" << endl;
        printRollNo();
        printMarks();
        printScore();
        cout << "Total Marks is : " << mathsMarks + scienceMarks + sportsScore << endl;
    }
};
int main(int argc, char const *argv[])
{
    result Sourav;
    Sourav.setRollNo(2019374);
    Sourav.setMarks(99, 97);
    Sourav.setScore(100);
    Sourav.printResult();
    return 0;
}
