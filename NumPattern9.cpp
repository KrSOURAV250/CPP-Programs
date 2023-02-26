#include <iostream>
using namespace std;
int fact(int n)
{
    int ff = 1;
    for (int i = 2; i <= n; i++)
    {
        ff *= i;
    }
    return ff;
}
int ncr(int n, int r)
{
    int cmb = (fact(n)) / (fact(n - r) * fact(r));
    return cmb;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ncr((i - 1), j) << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/
