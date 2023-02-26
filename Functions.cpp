#include <iostream>
using namespace std;
int V(int cubel)
{
    return cubel * cubel * cubel;
}
int V(int recl, int recb)
{
    return recl * recb;
}
int main(int argc, char const *argv[])
{
    int cubeL = 3;
    int recL = 3, recB = 4;
    cout << "Vol of Cube is " << V(cubeL) << endl;
    cout << "Aera of Rectangle is " << V(recL, recB) << endl;
    return 0;
}
