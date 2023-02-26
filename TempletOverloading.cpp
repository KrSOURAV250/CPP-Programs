#include <iostream>
using namespace std;
// template <class T>
// class cl
// {
// public:
//     T data;
//     cl(T a)
//     {
//         data = a;
//     }
//     void show();
// };
// template <class T>

// void cl<T>::show()
// {

//     cout << "The Data Value is :  " << data << endl;
// }
void func(int a)
{
    cout << "i am first func " << a << endl;
}
template <class T>
void func(T a)
{
    cout << "i am templet func " << a << endl;
}
int main(int argc, char const *argv[])
{
    // cl<int> cl1(859);
    // cl<string> cl1("String");
    // cl1.show();
    func(85);
    func("uhub");
    return 0;
}
