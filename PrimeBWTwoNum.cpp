#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << "The Prime Numbers Are : ";
    for (int i = n1; i < n2; i++)
    {
        if (prime(i))
        {
            cout << i << ", ";
        }
    }

    return 0;
}
