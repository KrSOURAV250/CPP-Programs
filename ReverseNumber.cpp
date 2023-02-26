#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    int rn = 0;
    while (num != 0)
    {
        int r = num % 10;
        rn = rn * 10 + r;
        num = num / 10;
    }
    cout << rn;
    return 0;
}
