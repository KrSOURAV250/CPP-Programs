#include <iostream>
using namespace std;
class A
{
public:
    void greet()
    {
        cout << "How Are You?" << endl;
    }
};
class B
{
public:
    void greet()
    {
        cout << "Kaise Ho Bhai?" << endl;
    }
};
class C : public A, public B
{
    int lan = 0;

public:
    C(void)
    {
        cout << "Press '1' For English, '2' For Hindi" << endl;
        cin >> lan;
    }
    void greet()
    {
        if (lan == 1)
        {
            A::greet();
        }
        else if (lan == 2)
        {
            B::greet();
        }
        else
            cout << "Please! Enter Correct Input." << endl;
    }
};
int main(int argc, char const *argv[])
{
    C c1;
    c1.greet();
    return 0;
}
