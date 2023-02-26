#include <iostream>
#include <cmath>
using namespace std;
bool pg(int a, int b, int c)
{
    int x = max(a, max(b, c)), y, z;
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else if (x == c)
    {
        y = a;
        z = b;
    }
    if (pow(x, 2) == pow(y, 2) + pow(z, 2))
    {
        return 1;
    }
    else
        return 0;
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if (pg(a, b, c))
    {
        cout << "It is PythaGorian Triplet" << endl;
    }
    else
        cout << "Not PythaGorian Triplet";

    return 0;
}
