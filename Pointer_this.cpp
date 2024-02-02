#include <iostream>
using namespace std;
/*
This Pointer ->'this' is a keyword which is a pointer which points to the object which invokes the member function.
Following are the situations where ‘this’ pointer is used:

Case 1) When local variable’s name is same as member’s name.
Case 2) To return reference to the calling object.

The this keyword refers to the current object, and static methods are not associated with any particular object.
They are called directly on the class, without creating an instance of the class.
*/
class A
{
    int a;

public:
    // Case1
    A(int a)
    {
        this->a = a;
    }
    // Case2
    A &changeVal(int a)
    {
        this->a = a;
        return *this;
    }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    A a(1);
    a.display();
    a.changeVal(4).display();
    return 0;
}