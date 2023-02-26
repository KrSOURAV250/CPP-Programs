#include <bits/stdc++.h>
using namespace std;
int Rev(int n)
{
    int ans = 0, i = 0;
    while (n != 0)
    {
        ans += (n % 10) * pow(10, i);
        n /= 10;
        i++;
    }                                                   // Incomplete...............................
    return ans;
}
int AddBinary(int a, int b)
{
    int ans = 0, carry = 0, temp = 0, i = 0;
    while (max(a, b) != 0)
    {
        if ((a % 2 == 0) && (b % 2 == 0) && (carry = 0))
        {
            temp = 0;
            carry = 0;
        }
        else if ((a % 2 == 0) && (b % 2 == 0) && (carry = 1))
        {
            temp = 1;
            carry = 0;
        }
        else if (((a % 2 == 0) && (b % 2 == 1) && (carry = 0)) || ((a % 2 == 1) && (b % 2 == 0) && (carry = 0)))
        {
            carry = 0;
            temp = 1;
        }
        else if (((a % 2 == 0) && (b % 2 == 1) && (carry = 1)) || ((a % 2 == 1) && (b % 2 == 0) && (carry = 1)))
        {
            temp = 0;
            carry = 1;
        }
        else if ((a % 2 == 1) && (b % 2 == 1) && (carry = 0))
        {
            temp = 0;
            carry = 1;
        }
        else if ((a % 2 == 1) && (b % 2 == 1) && (carry = 1))
        {
            temp = 1;
            carry = 1;
        }
        a /= 10;
        b /= 10;
        ans += temp * pow(10, i);
        i++;
    }
    return Rev(ans);
}
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << AddBinary(a, b);
    return 0;
}
