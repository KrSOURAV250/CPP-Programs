#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char const *argv[])
{
    string st;
    ifstream hh("Sample.txt");
    // hh >> st;

    while (hh.eof() ==  0)
    {
        getline(hh, st);
        cout << st << endl;
    }
    hh.close();

    return 0;
}
