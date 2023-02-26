#include <iostream>
using namespace std;
class Y;
class X
{
    int a;
    friend int sum(X m, Y n);

public:
    void SD(int q)
    {
        a = q;
    }
};
class Y
{
    int b;
    friend int sum(X m, Y n);

public:
    void SD(int q)
    {
        b = q;
    }
};
int sum(X m, Y n)
{
    return m.a + n.b;
}
int main(int argc, char const *argv[])
{
    X qq;
    Y ww;
    qq.SD(32);
    ww.SD(8);
    cout << "The Sum is " << sum(qq, ww);

    return 0;
}
