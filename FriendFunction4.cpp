#include <iostream>
using namespace std;
class Y;
class X
{
    int x1;
    friend void Exchange(X &qq, Y &ww);

public:
    void setData(int a)                                         
    {
        x1 = a;
    }
    void display()
    {
        cout << "the Value is " << x1 << endl;
    }
};
class Y
{
    int x2;
    friend void Exchange(X &qq, Y &ww);

public:
    void setData(int b)
    {
        x2 = b;
    }
    void display()
    {
        cout << "the Value is " << x2 << endl;
    }
};
void Exchange(X &qq, Y &ww)
{
    int temp = qq.x1;
    qq.x1 = ww.x2;
    ww.x2 = temp;
}
int main(int argc, char const *argv[])
{
    X m;
    Y n;
    m.setData(55);
    m.display();
    n.setData(88);
    n.display();
    Exchange(m, n);
    m.display();
    n.display();

    return 0;
}
