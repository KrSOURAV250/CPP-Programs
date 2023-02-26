#include <iostream>
using namespace std;
template <class T = int, class U = char>
class myclass
{
public:
    T a;
    U b;
    myclass(T a, U b)
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout << "The First DataType is " << a << endl
             << "Second DataType is " << b << endl;
    }
};
int main(int argc, char const *argv[])
{
    myclass<string, int> mc("The Man is 59 and u", 850);
    mc.show();
    return 0;
}
