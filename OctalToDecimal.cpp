#include <iostream>
#include <cmath>
using namespace std;
int OtoD(int n)
{
    int r = 0, ans = 0, i = 0;
    while (n != 0)
    {
        r = n % 10;
        ans += r * pow(8, i);
        i++;
        n /= 10;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << OtoD(n);
    return 0;
}
