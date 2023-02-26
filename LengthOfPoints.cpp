#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;
    friend int length(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
};
int length(Point o1, Point o2)
{
    return sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2));
}
int main(int argc, char const *argv[])
{
    Point p1(1, 0), p2(70, 0);
    cout << "The Length is :  " << length(p1, p2);

    return 0;
}
