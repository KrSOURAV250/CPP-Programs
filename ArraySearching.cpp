#include <iostream>
using namespace std;
int linearSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i + 1;
    return -1;
}
int binarySearch(int *arr, int size, int key)
{
    int f = 0, e = size - 1, m = 0;
    while (f != e)
    {
        m = (f + e) / 2;
        if (arr[f] == key)
            return f + 1;
        else if (arr[e] == key)
            return e + 1;
        else if (arr[m] == key)
            return m + 1;
        else if (key < arr[m])
        {
            e = m - 1;
            f++;
        }
        else
        {
            f = m + 1;
            e--;
        }
    }
    cout << "Key Not Found" << endl;
    return -1;
}
int main(int argc, char const *argv[])
{
    // int arr[] = {25, 36, 14, 47, 58, 69, 74, 85, 96, 41, 52, 63};
    // int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 250, 295};
    int arr[] = {25, 14, 36, 74, 85, 96, 52, 63, 41, 17, 28, 93, 82, 71, 39};

    // cout << linearSearch(arr, 12, 69) << endl;
    cout << binarySearch(arr, 15, 71) << endl;
    return 0;
}
