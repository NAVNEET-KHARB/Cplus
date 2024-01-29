#include <iostream>
using namespace std;
/*
Multiple Inheritance -> Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
The constructors of inherited classes are called in the same order in which they are inherited.
Syntax ->
class Derived : visibility-mode Base1,visibility-mode Base2{
    code block
};
*/
class Base1
{
protected:
    int base1int;

public:
    Base1()
    {
        cout << "Base1 constructor" << endl;
    }
    void setBase1(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    Base2()
    {
        cout << "Base2 constructor" << endl;
    }
    void setBase2(int a)
    {
        base2int = a;
    }
};
class Base3
{
protected:
    int base3int;

public:
    Base3()
    {
        cout << "Base3 constructor" << endl;
    }
    void setBase3(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    Derived()
    {
        cout << "Derived constructor" << endl;
    }
    void disp()
    {
        cout << "The value of Base1int is " << base1int << endl;
        cout << "The value of Base2int is " << base2int << endl;
        cout << "The value of Base3int is " << base3int << endl;
        cout << "Their sum is " << base1int + base2int + base3int << endl;
    }
};
int main()
{
    Derived d1;
    d1.setBase1(23);
    d1.setBase2(46);
    d1.setBase3(92);
    d1.disp();
    return 0;
}