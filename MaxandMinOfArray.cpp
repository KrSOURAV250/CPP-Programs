#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, MaxNo = INT_MIN, MinNo = INT_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        MaxNo = max(arr[i], MaxNo);
        MinNo = min(arr[i], MinNo);
    }
    cout << "The MAXIMUM No. is " << MaxNo << " And The MINIMUM No. is " << MinNo;
    return 0;
}
