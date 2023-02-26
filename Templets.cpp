#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *ptr;
    int m;
    vector(int m)
    {
        this->m = m;
        ptr = new T[m];
    }
    T dotProduct(vector v)
    {
        T d = 0;
        for (int i = 0; i < m; i++)
        {
            d += ptr[i] * v.ptr[i];
        }
        return d;
    }
};
int main(int argc, char const *argv[])
{
    vector<float> v1(3);
    v1.ptr[0] = 3;
    v1.ptr[1] = 45.5;
    v1.ptr[2] = 1;
    vector<float> v2(3);
    v2.ptr[0] = 1;
    v2.ptr[1] = 3;
    v2.ptr[2] = 2;
    cout << "The Dot Product is : " << v1.dotProduct(v2) << endl;
    vector<int> v3(3);
    v1.ptr[0] = 3;
    v1.ptr[1] = 45;
    v1.ptr[2] = 1;
    vector<int> v4(3);
    v2.ptr[0] = 1;
    v2.ptr[1] = 4;
    v2.ptr[2] = 2;
    cout << "The Dot Product is : " << v1.dotProduct(v2) << endl;
    return 0;
}
