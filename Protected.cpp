#include <iostream>
using namespace std;
class base
{
    int a = 55;

protected:
    int b = 66;

public:
    int c = 77;
};
class drived : public base
{
public:
    int d = 99;
};
int main(int argc, char const *argv[])
{
    drived d1;
    // cout << d1.b;
    cout << d1.c;
    return 0;
}
