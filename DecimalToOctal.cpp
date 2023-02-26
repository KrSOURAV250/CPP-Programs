#include <iostream>
#include <cmath>
using namespace std;
int DtoO(int n)
{
    int ans = 0, i = 0;
    while (n != 0)
    {
        ans += (n % 8) * pow(10, i);
        i++;
        n /= 8;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << DtoO(n);
    return 0;
}
