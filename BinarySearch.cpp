#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int k)
{
    int s = 0, e = n;
    int ran = (s + e) / 2;
    for (int i = 0; i < n; i++)
    {
        if (arr[ran] == k)
        {
            return ran+1;
        }
        else if (arr[ran] > k)
        {
            s = ran;
        }
        else                            //   Pending...........................................
            e = ran;
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
    cout << "The Key is at " << BinarySearch(arr, n, key) << " Position" << endl;
    return 0;
}
