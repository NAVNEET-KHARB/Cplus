#include <iostream>
using namespace std;
/*
Object Memory Allocation -> The way memory is allocated to variables and functions of the class is different even though they both are from the same class.
The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables when the class is declared. At the same time, single variables can have different values for different objects, so every object has an individual copy of all the variables of the class. But the memory is allocated to the function only once when the class is declared. So the objects don’t have individual copies of functions only one copy is shared among each object.
*/
// A class for shops
class Shop
{
    // Using arrays in classes
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void addItem(int id, int price);
    void displayItem(void);
};
void Shop::addItem(int id, int price)
{
    itemId[counter] = id;
    itemPrice[counter] = price;
    counter++;
}
void Shop::displayItem()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "ItemId : " << itemId[i] << "\tItemPrice : " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.addItem(101, 12);
    dukaan.addItem(102, 23);
    dukaan.addItem(103, 34);
    dukaan.addItem(104, 45);
    dukaan.addItem(105, 56);
    dukaan.displayItem();
    return 0;
}