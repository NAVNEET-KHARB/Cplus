#include <iostream>
using namespace std;
/*
Pointer - It is a datatype which is used to store the adddress of other datatypes.
*/
int main()
{
    int a = 3;
    // b is a pointer to a ie b stores address of a.
    int *b = &a;
    // & -> address of operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;
    // * -> Derefrencing operator. Used to know the value at an address.
    cout << "The value at b is " << *b << endl;
    // Pointer to Pointer -> A variable which stores the address of a pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;
    return 0;
}