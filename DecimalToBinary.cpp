#include <bits/stdc++.h>
using namespace std;
int DtoB(int n)
{
    int ans = 0, i = 0;
    while (n != 0)
    {
        ans += (n % 2) * pow(10, i);
        n /= 2;
        i++;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << DtoB(n);
    return 0;
}
