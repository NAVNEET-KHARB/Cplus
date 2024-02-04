#include <iostream>
using namespace std;
/*
Virtual Function ->
A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class.
When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.

->Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.
->They are mainly used to achieve Runtime polymorphism.
->Functions are declared with a virtual keyword in a base class.
->The resolving of a function call is done at runtime.

The rules for the virtual functions in C++ are as follows:

->Virtual functions cannot be static.
->A virtual function can be a friend function of another class.
->Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
->The prototype of virtual functions should be the same in the base as well as the derived class.
->They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
->A class may have a virtual destructor but it cannot have a virtual constructor.
*/

class BaseClass
{
public:
    int base = 10;
    virtual void print()
    {
        cout << "The value of base(B) is :" << base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int derived = 20;
    void print()
    {
        cout << "The value of base(D) is :" << base << endl;
        cout << "The value of derived(D) is :" << derived << endl;
    }
};

int main()
{
    BaseClass *basePtr;
    DerivedClass derivedObj;
    basePtr = &derivedObj;
    basePtr->print();
    return 0;
}