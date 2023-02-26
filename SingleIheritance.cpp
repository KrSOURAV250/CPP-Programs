#include <iostream>
using namespace std;
class employee
{

    int id;

public:
    int id2;
    float salry = 45.55;
    employee() {}
    employee(int idfil)
    {
        id = idfil;
    }
    void showdata()
    {
        cout << "The Id is " << id << " and The Salary is : " << salry + 1 << endl;
    }
};
class programer : public employee
{
public:
    programer(int idf)
    {
        id2 = idf;
    }

    void ss()
    {
        cout << "The Id2 is " << id2 << endl;
    }
};
int main(int argc, char const *argv[])
{
    employee e1(2);
    e1.showdata();
    programer p1(36);
    p1.showdata();
    p1.ss();
    return 0;
}
