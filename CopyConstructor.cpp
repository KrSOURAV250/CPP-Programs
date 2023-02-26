#include <iostream>
using namespace std;
class number
{
    int x;

public:
    number() {}
    number(int a)
    {
        x = a;
    }
    number(number &obj)
    {
        x = obj.x;
        cout << "THis is copied" << endl;
    }
    void display() 
    {
        cout << "The Value of X is :  " << x << endl;
    }
};
int main(int argc, char const *argv[])
{
    number n1(3), n2(86);
    n1.display();
    n2.display();
    number n3 = n1;
    // number n3(n1);
    n3.display();

    return 0;
}
