#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char arr[] = {'l', 'i', 'k', 't'};
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : {1, 5, 9, 7, 3, 6, 4, 100, 250, 295})
    {
        cout << i << " ";
    }

    return 0;
}
