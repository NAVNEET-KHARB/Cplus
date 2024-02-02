#include <iostream>
using namespace std;
/*
We can also make Array Of Objects Using Pointers.
Syntax ->
className *pointer = new className[no. of objects];
*/
class ShopItems
{
    int itemId;
    double itemPrice;

public:
    ShopItems() {}
    ShopItems(int a, double b) : itemId(a), itemPrice(b) {}
    void display()
    {
        cout << "Item Id : " << itemId << " Item Price : " << itemPrice << endl;
    }
};
int main()
{
    int totalItems;
    cout << "Enter no. of Items : ";
    cin >> totalItems;
    ShopItems *lst1 = new ShopItems[totalItems];
    for (int i = 0; i < totalItems; i++)
    {
        double price;
        cout << "Enter price for item with Id " << i + 1 << " : ";
        cin >> price;
        *(lst1 + i) = ShopItems(i + 1, price);
    }
    for (int i = 0; i < totalItems; i++)
    {
        (lst1 + i)->display();
    }

    return 0;
}