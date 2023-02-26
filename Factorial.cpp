#include <iostream>
using namespace std;
int fact(int n)
{
    int kk = 1;
    for (int i = 2; i <= n; i++)
    {
        kk = kk * i;
    }
    return kk;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
//      5! = 5x4x3x2x1