#include <iostream>
using namespace std;
class base
{
public:
    int varBase = 69;
    void display()
    {
        cout << "The Value of Base Class Variable is : " << varBase << endl;
    }
};
class drived : public base
{
public:
    int varDrived = 99;
    void display()
    {
        cout << "The Value of Base Class Variable is : " << varBase << endl;
        cout << "The Value of Drived Class Variable is : " << varDrived << endl;
    }
};
int main(int argc, char const *argv[])
{
    base b1;
    drived d1;
    base *ptrBase = &d1;
    // drived *ptrDrived = &d1;
    ptrBase->display();
    return 0;
}
