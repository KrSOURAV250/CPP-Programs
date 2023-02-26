#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 9;
    // cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // if (((i % 2) == 0 && (j % 2) == 0) || ((i % 2) == 1 && (j % 2) == 1))
            if ((i + j) % 2 == 0)
            {
                cout << true << " ";
            }
            else
                cout << false << " ";
        }
        cout << endl;
    }
    return 0;
}
