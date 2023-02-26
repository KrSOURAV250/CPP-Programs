#include <iostream>
using namespace std;
class complexNo
{
    int a, b;
    friend complexNo Sum(complexNo p, complexNo q);

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void displayData()
    {
        cout << "The Complex No. is : " << a << " + " << b << "i" << endl;
    }
};
complexNo Sum(complexNo p, complexNo q)
{
    complexNo z;
    z.setData(p.a + q.a, p.b + q.b);
    return z;
}

int main(int argc, char const *argv[])
{
    complexNo c1, c2, cs;
    c1.setData(2, 99);
    c1.displayData();
    c2.setData(52, 3);
    c2.displayData();
    cs = Sum(c1, c2);
    cs.displayData();

    return 0;
}
