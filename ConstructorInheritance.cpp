#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "This is Class Base1" << endl;
    }
    void printDatab1()
    {
        cout << "data1 is : " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "This is Class Base2" << endl;
    }
    void printDatab2()
    {
        cout << "data2 is : " << data2 << endl;
    }
};
class drived : public base1, public base2
{
    int dr1, dr2;

public:
    drived(int i, int j, int k, int l) : base1(j), base2(k)
    {
        dr1 = i;
        dr2 = l;
        cout << "This is Class drived" << endl;
    }
    void printDrived()
    {
        cout << "dr1 is : " << dr1 << endl;
        cout << "dr2 is : " << dr2 << endl;
    }
};
int main(int argc, char const *argv[])
{
    drived d1(32, 40, 52, 60);
    // d1.printDatab1();
    // d1.printDatab2();
    // d1.printDrived();
    return 0;
}
