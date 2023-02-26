#include <iostream>
using namespace std;
int Position(int arr[], int s, int k)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == k)
        {
            return i + 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n, key;
    cout << "Enter the Size Of Array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter The Key To Find" << endl;
    cin >> key;
    cout << "The Key is at " << Position(arr, n, key) << " Position" << endl;
    return 0;
}
