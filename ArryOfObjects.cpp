#include <iostream>
using namespace std;
class employee
{
    int id;
    static int salary, count;

public:
    void setid()
    {
        cout << "enter The Id of employee" << endl;
        cin >> id;
        count++;
        if (count % 2 == 0)
        {
            salary = 99999;
        }
        else
            salary = 225;
    }
    void getidandsalary()
    {
        cout << "the id is " << id << " and the salary is : " << salary << endl;
    }
};
int employee::salary;
int employee::count;
int main(int argc, char const *argv[])
{
    employee gamma[4];
    for (int i = 0; i < 4; i++)
    {
        gamma[i].setid();
        gamma[i].getidandsalary();
    }

    return 0;
}
