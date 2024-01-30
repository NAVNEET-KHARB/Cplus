#include <iostream>
using namespace std;
/*
Ambiguity -> In multiple inheritances, when one class is derived from two or more base classes then there may be a possibility that the base classes have functions with the same name, and the derived class may not have functions with that name as those of its base classes.
If the derived class object needs to access one of the similarly named member functions of the base classes then it results in ambiguity because the compiler gets confused about which base’s class member function should be called.

Ambiguity Resolution -> We can solve this ambiguity by two approaches.
Approach 1 -> Specify the function to be used in the derived class itself in a function of same name.
Approach 2 -> Specify the class Name to the object itself . Syntax -> ObjName.ClassName.FuncName()
*/
class Base1
{
public:
    void greet()
    {
        cout << "Hi" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int b;

public:
    // Approach 1
    /*void greet()
    {
        Base1::greet();
    }*/
};
int main()
{
    Base1 b1;
    Base2 b2;
    Derived d;
    b1.greet();
    b2.greet();
    d.Base1::greet();
    d.Base2::greet();
    return 0;
}