#include <iostream>
using namespace std;
class shop
{
    int itemNo[20], itemPrice[20], counter = 0;

public:
    void setprice();
    void showIP();
};

void shop ::setprice()
{
    cout << "Enter Item No. " << counter + 1 << " :" << endl;
    cin >> itemNo[counter];
    cout << "Enter Price of Item No. " << itemNo[counter] << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::showIP()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item No. " << itemNo[i] << " is " << itemPrice[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    shop dukan;

    dukan.setprice();
    dukan.setprice();
    dukan.setprice();

    dukan.showIP();

    return 0;
}
