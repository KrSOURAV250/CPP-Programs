#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, count = 1;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
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
7 8 9 10
11 12 13 14 15
*/