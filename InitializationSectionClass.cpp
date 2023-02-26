#include <iostream>
using namespace std;
class ab
{
    int a;
    int b;

public:
    ab(int i, int j) : a(i), b(j)
    {
        cout << "Done" << endl;
    }
    void print()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};
int main(int argc, char const *argv[])
{
    ab ab1(55, 60);
    ab1.print();
    return 0;
}
