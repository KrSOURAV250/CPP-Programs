#include <iostream>
#include <string>
using namespace std;
class binary
{
    string n;
    void checkB(void);

public:
    void readB(void);
    void onesc(void);
};
void binary::readB(void)
{
    cout << "Enter The Number" << endl;
    cin >> n;
}
void binary::checkB(void)
{
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] != '0' && n[i] != '1')
        {
            cout << "It is NOt a Binary Number" << endl;
            exit(0);
        }
    }
}
void binary ::onesc(void)
{
    checkB();
    for (int i = 0; i < n.length(); i++)
    {
        if (n.at(i) == '0')
        {
            n.at(i) = '1';
        }
        else if (n.at(i) == '1')
        {
            n.at(i) = '0';
        }
    }
    cout << n << endl;
}
int main(int argc, char const *argv[])
{
    binary b;
    b.readB();
    // b.checkB();
    b.onesc();
    return 0;
}
