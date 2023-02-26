#include <iostream>
using namespace std;
class base1
{
protected:
    int b1;

public:
    void setb1(int a)
    {
        b1 = a;
    }
};
class base2
{
protected:
    int b2;

public:
    void setb2(int a)
    {
        b2 = a;
    }
};
class drived : public base1, public base2
{
public:
    int sum()
    {
        return b1 + b2;
    }
};
int main(int argc, char const *argv[])
{
    drived d;
    d.setb1(23);
    d.setb2(2);
    cout << "The Sum is : " << d.sum();
    return 0;
}
