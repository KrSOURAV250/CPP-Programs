#include <iostream>
using namespace std;
class cNo
{
    int a, b;

public:
    void setData(int p, int q)
    {
        a = p;
        b = q;
    }
    void sumOfCNo(cNo m, cNo n)
    {
        a = m.a + n.a;
        b = m.b + n.b;
    }
    void Display()
    {
        cout << "The Complex No. is " << a << " + " << b << "i" << endl;
    }
};
int main(int argc, char const *argv[])
{
    cNo c1, c2, c3;
    c1.setData(4, 6);
    c1.Display();
    c2.setData(5, 6);
    c2.Display();
    c3.sumOfCNo(c1, c2);
    c3.Display();
    return 0;
}
