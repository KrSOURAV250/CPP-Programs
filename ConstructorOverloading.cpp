#include <iostream>
using namespace std;
class Points
{
    int x, y;

public:
    // Points(int a)
    // {
    //     x = a;
    //     y = 99;
    // }
    Points(int a, int b = 32)
    {
        x = a;
        y = b;
    }
    // Points(int b)
    // {
    //     x = 55;
    //     y = b;
    // }
    void Display()
    {
        cout << "The VAlue of X and Y is (" << x << ", " << y << ")" << endl;
    }
};
int main(int argc, char const *argv[])
{
    Points p1(27, 35), p2(8);
    p1.Display();
    p2.Display();

    return 0;
}
