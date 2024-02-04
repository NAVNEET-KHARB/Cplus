#include <iostream>
using namespace std;
/*
->A pointer is a data type that stores the address of other data types.
->Pointers can be used for base objects as well as objects of derived classes.
->A pointer to the object of the derived class and a pointer to the object of the base class are type-compatible (may be used in different ways).

Approach:
->A derived class is a class that takes some properties from its base class.
->It is true that a pointer of one class can point to another class, but classes must be a base and derived class, then it is possible.
->To access the variable of the base class, a base class pointer will be used.
->So, a pointer is a type of base class, and it can access all, public function and variables of the base class since the pointer is of the base class, this is known as a binding pointer.
->In this pointer base class is owned by the base class but points to the derived class object.

We can only do this with baseclass pointer but not vice-versa.
*/

class BaseClass
{
public:
    int base;
    void print()
    {
        cout << "The value of base(B) is :" << base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int derived;
    void print()
    {
        cout << "The value of base(D) is :" << base << endl;
        cout << "The value of derived(D) is :" << derived << endl;
    }
};
int main()
{
    BaseClass *basePtr;
    // BaseClass baseObj;
    DerivedClass *derivedPtr;
    DerivedClass derivedObj;
    basePtr = &derivedObj;
    derivedPtr = &derivedObj;
    basePtr->base = 35;
    basePtr->print();
    derivedPtr->derived = 70;
    derivedPtr->print();
    // This will produce Error;
    // derivedPtr = &baseObj;
    return 0;
}