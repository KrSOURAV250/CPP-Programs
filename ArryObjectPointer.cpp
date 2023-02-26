#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id of item is :  " << id << endl;
        cout << "The price of item is :  " << price << endl;
    }
};
int main(int argc, char const *argv[])
{
    int size = 4, id;
    float price;
    shop *s1 = new shop[size];
    shop *ss = s1;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Details of Item " << i + 1;
        cout << endl
             << "Enter The Id : ";
        cin >> id;
        cout
            << "Enter The price : ";
        cin >> price;
        s1->setData(id, price);
        s1++;
    }

    for (int i = 0; i < size; i++)
    {

        ss->getData();
        ss++;
    }
    // ss->getData();
    // (ss + 1)->getData();
    // (ss + 2)->getData();
    // (ss + 3)->getData();

    return 0;
}
