#include <iostream>
using namespace std;
void fn(int n)
{
    int n1 = 0, n2 = 1, num = 0;
    for (int i = 0; i < n; i++)
    {
        num = n1 + n2;
        cout << num << ", ";
        n1 = n2;
        n2 = num;
    }
}
int main(int argc, char const *argv[])
{
    int n1 = 0, n2 = 1, n, num = 0;
    cin >> n;
    fn(n);
    return 0;
}
//                  0, 1, 1, 2, 3, 5, 8, 13......