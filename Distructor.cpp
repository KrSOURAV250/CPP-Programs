#include <iostream>
using namespace std;
int count = 0;
class anything
{
public:
    anything()
    {
        count++;
        cout << "The New Object is Created || The Object No. is " << count << endl;
    }
    ~anything()
    {
        cout << "The   Object is Deleted || The Object No. is " << count << endl;
        // count--;
    }
};
int main(int argc, char const *argv[])
{
    cout << "This IS MAin Program" << endl;
    anything n1;
    cout << "The n1 object is created" << endl;
    {
        anything n2, n3;
        cout << "The n2 and n3 object is created" << endl;
    }
    cout << "The n2 and n3 object is Deleted" << endl;
    {
        anything n4;
    }
    return 0;
}
