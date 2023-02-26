#include <iostream>
using namespace std;
class simple
{
    int a, b, c;

public:
    simple(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        // cout << "The Value of a, b and c is " << a << ", " << b << " and " << c << endl;
    }
    void display()
    {
        cout << "The Value of a, b and c is " << a << ", " << b << " and " << c << endl;
    }
};
int main(int argc, char const *argv[])
{
    simple ob(2, 65, 85);
    simple ob2 = simple(22, 22, 33);
    ob.display();
    ob2.display();
    return 0;
}
