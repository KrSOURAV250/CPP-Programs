#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;

    float ratings;

public:
    CWH(string s, float r)
    {
        title = s;
        ratings = r;
    }
    virtual void display()
    {
        cout << "The Base Class" << endl;
    }
};
class CWHVideo : public CWH
{
protected:
    float length;

public:
    CWHVideo(float l, float r, string s) : CWH(s, r)
    {
        length = l;
    }
    void display()
    {
        cout << "The Title of The Video is: " << title << endl;
        cout << "The Ratings of The Video is: " << ratings << endl;
        cout << "The Length of The Video is: " << length << endl;
    }
};
class CWHText : public CWH
{
protected:
    int words;

public:
    CWHText(int w, float r, string s) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The Title of The Text is: " << title << endl;
        cout << "The Ratings of The Text is: " << ratings << endl;
        cout << "The Words of The Text is: " << words << endl;
    }
};
int main(int argc, char const *argv[])
{
    string s = "C++ Tutorials";
    float rv = 4.9;
    float rt = 3.9;
    float l = 25.49;
    int w = 499;

    CWHVideo cv(l, rv, s);
    CWHText ct(w, rt, s);
    CWH *ptrCWH[2];
    ptrCWH[0] = &cv;
    ptrCWH[1] = &ct;
    // For Video
    ptrCWH[0]->display();
    // For Text
    cout << endl;
    ptrCWH[1]->display();

    return 0;
}
