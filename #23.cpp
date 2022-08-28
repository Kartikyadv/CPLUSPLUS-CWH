#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 1;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
};
void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item no " << counter << endl;
    cin >> itemPrice[counter];
    counter++;
}
int main()
{
    Shop dukaan;
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}