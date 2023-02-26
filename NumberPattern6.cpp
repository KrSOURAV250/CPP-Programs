#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, count = 1;
    ;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {

            cout << count << " ";
            count++;
        }

        cout << endl;
    }
    return 0;
}
/*                    
    1
   2 3
  4 5 6
 7 8 9 9
9 9 9 9 9 


*/