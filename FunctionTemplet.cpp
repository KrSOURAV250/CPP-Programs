#include <iostream>
using namespace std;
template <class T>
void fun(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main(int argc, char const *argv[])
{
    // int x = 55, y = 99;
    string x = "SOURAV", y = "Kr. ";
    // char x = 'S', y = 'K';
    cout << "The Average is : " << x << ", " << y << endl;
    fun(x, y);
    cout << "The Average is : " << x << ", " << y << endl;

    return 0;
}
