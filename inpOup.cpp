#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i < b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if ((i % j) == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << "it is prime" << i << endl;
        }
    }

    return 0;
}
