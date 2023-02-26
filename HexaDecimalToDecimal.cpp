#include <bits/stdc++.h>
using namespace std;
int HDtoD(string n)
{
    int ans = 0, j = 0;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + (n[i] - '0') * pow(16, j);
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + ((n[i] - 'A') + 10) * pow(16, j);
        }
        j++;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    string n;
    cin >> n;
    cout << "The Decimal Number of " << n << " is : " << HDtoD(n);
    return 0;
}
