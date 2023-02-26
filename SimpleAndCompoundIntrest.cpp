#include <iostream>
using namespace std;
class bankD
{
    int pr, tt, rv; // pr = Principle, ir = Intrest Rate, tt = Time, rv = return value
    float ir;

public:
    bankD() {}
    bankD(int p, float r, int t)
    {
        pr = p;
        ir = r;
        tt = t;
        rv = pr;
        for (int i = 1; i <= tt; i++)
        {
            rv = rv + (pr * ir);
        }
    }
    bankD(int p, int r, int t)
    {
        pr = p;
        ir = float(r) / 100;
        tt = t;
        rv = pr;
        for (int i = 1; i <= tt; i++)
        {
            rv = rv + (pr * ir);
        }
    }

    void display()
    {
        cout << "The Return Value is : " << rv << endl;
    }
};
int main(int argc, char const *argv[])
{
    int p, r, t;
    float ir;

    cin >> p >> ir >> t;
    bankD b2(p, ir, t);
    b2.display();
    cin >> p >> r >> t;
    bankD b1(p, r, t);
    b1.display();
    return 0;
}
