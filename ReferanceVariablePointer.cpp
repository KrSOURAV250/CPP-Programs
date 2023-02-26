#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 88, b = 100000;
    swap(a, b);
    cout << a << ", " << b;
    return 0;
}
