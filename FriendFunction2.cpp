#include <iostream>
using namespace std;
class complexNo;
class calculator
{
public:
    int sum(complexNo p, complexNo q);
};

class complexNo
{
    int a, b;
    friend int calculator ::sum(complexNo a, complexNo b);

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};
int calculator ::sum(complexNo p, complexNo q)
{
    return p.a + q.a;
}
int main(int argc, char const *argv[])
{
    complexNo c1, c2;
    c1.setData(55, 9);
    c2.setData(5, 1);
    calculator ss;
    cout << " The Sum is : " << ss.sum(c1, c2);
    return 0;
}
