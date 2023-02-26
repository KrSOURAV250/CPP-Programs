#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, AN = 0;

    cin >> num;
    int tt = num;
    while (num != 0)
    {
        int r = num % 10;
        AN = AN + pow(r, 3);
        num = num / 10;
    }
    if (AN == tt)
    {
        cout << "It is ARMSTROM NUMBER" << endl;
    }
    else
        cout << "NOt ARMSTROM";
    return 0;
}
