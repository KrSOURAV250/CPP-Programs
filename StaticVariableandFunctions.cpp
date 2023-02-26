#include <iostream>
using namespace std;

class student
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "enter The Value Of ID" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "id no is " << id << " and studend no is " << count << endl;
    }
    static void pcount(void)
    {
        cout << "the Count is " << count << endl;
    }
};
int student::count = 49;
int main(int argc, char const *argv[])
{
    student harry, sourav, preet, garry;
    harry.setdata();
    harry.getdata();
    student::pcount();
    sourav.setdata();
    sourav.getdata();
    student::pcount();
    preet.setdata();
    preet.getdata();
    student::pcount();
    garry.setdata();
    garry.getdata();
    student::pcount();
    return 0;
}
