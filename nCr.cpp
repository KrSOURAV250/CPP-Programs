#include <iostream>
using namespace std;
int fact(int n)
{
    int ftr = 1;
    for (int i = 2; i <= n; i++)
    {
        ftr = ftr * i;
    }
    return ftr;
}
int main(int argc, char const *argv[])
{
    int n, r;
    cin >> n >> r;
    cout << (fact(n)) / (fact(n - r) * fact(r));
    return 0;
}

/*                  nCr = n!/(n-r)!*r!*/