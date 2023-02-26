#include <iostream>
#include <cmath>
using namespace std;
int BtoD(int n)
{
    int ans = 0, r = 0, i = 0;
    while (n != 0)
    {
        r = n % 10;
        ans +=  r * pow(2, i);
        i++;
        n /= 10;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << BtoD(n);
    return 0;
}
