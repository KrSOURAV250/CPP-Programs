#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A &it()
    {
        return *this;
    }
    void pd(int a)
    {
        this->a = a;
        cout << this << endl;
    }
    void showData()
    {
        cout << "the value of a is : " << a << endl;
    }
};
int main(int argc, char const *argv[])
{
    A a1;
    (a1.it()).pd(883);
    (a1.it()).showData();

    return 0;
}
