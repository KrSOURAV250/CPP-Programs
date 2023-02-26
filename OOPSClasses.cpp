#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int clas;
    char sec;

public:
    int roll_no;
    int data(int rn);
};

int student ::data(int rn)
{
    switch (rn)
    {
    case 2019374:
        name = "Kr. SOURAV";
        clas = 14;
        sec = 'B';
        cout << "Name : " << name << endl
             << "class : " << clas << endl
             << "Section : " << sec;
        break;
    case 2019372:
        name = "Shivam Sharma";
        clas = 14;
        sec = 'B';
        cout << "Name : " << name << endl
             << "class : " << clas << endl
             << "Section : " << sec;
        break;
    case 2027772:
        name = "Dinesh Kumar Sharma";
        clas = 14;
        sec = 'A';
        cout << "Name : " << name << endl
             << "class : " << clas << endl
             << "Section : " << sec;
        break;

    default:
        cout << "Enter Valid Roll No.......";
        break;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int rolno;
    student s1;
    cout << "Enter the Roll No.\n";
    cin >> rolno;
    s1.data(rolno);
    cout << s1.roll_no;

    return 0;
}
