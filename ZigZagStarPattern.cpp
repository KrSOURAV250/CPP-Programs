#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++)        // i = now number
    {
        for (int j = 1; j <= n; j++)            // j = column number
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
/*
    *       *     
  *   *   *   *
*       *       *

*/