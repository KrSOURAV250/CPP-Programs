#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata()
    {
        data1 = 55;
        data2 = 61;
    }
    int showdata1()
    {
        return data1;
    }
    int showdata2()
    {
        return data2;
    }
};
class drived : base
{
    int data3;

public:
    void process()
    {
        setdata();
        data3 = showdata1() * data2;
    }
    void display()
    {
        cout << "The Value of Data1 is : " << showdata1() << endl;
        cout << "The Value of Data2 is : " << data2 << endl;
        cout << "The Value of Data3 is : " << data3 << endl;
    }
};
int main(int argc, char const *argv[])
{
    drived d1;
    // d1.setdata();
    d1.process();
    d1.display();
    return 0;
}
