#include <iostream>
using namespace std;
/*
Union -> In C++, a union is a user-defined datatype in which we can define members of different types of data types just like structures. But one thing that makes it different from structures is that the member variables in a union share the same memory location, unlike a structure that allocates memory separately for each member variable. The size of the union is equal to the size of the largest data type.
*/
// Creating a union
union barterMoney
{
    int riceBags;
    char landArea;
    float goldVal;
};

int main()
{
    // Initializing a union
    union barterMoney m1;
    m1.riceBags = 50;
    cout << "m1.ricebags = " << m1.riceBags << endl;
    m1.landArea = 'f';
    cout << "m1.landArea = " << m1.landArea << endl;
    m1.goldVal = 5.125;
    cout << "m1.goldVal = " << m1.goldVal << endl;
    union barterMoney m2;
    m2.riceBags = 15;
    m2.landArea = 'f';
    m2.goldVal = 1.5;
    cout << "m2.ricebags = " << m2.riceBags << endl;
    cout << "m2.landArea = " << m2.landArea << endl;
    cout << "m2.goldVal = " << m2.goldVal << endl;
    return 0;
}