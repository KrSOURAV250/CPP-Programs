#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i, tt = 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME";
            tt = 1;
            break;
        }
    }
    if (tt == 0)
    {
        cout << " IT IS PRIME ";
    }

    return 0;
     
}
