#include <iostream>
using namespace std;
/*
Constructors in Derived Class ->
-> We can use constructors in derived classes.
-> If base class doesn't have any args.,there is no need of any constructor in derived class.
-> But if there are one or more args. in the base class constructor, derived class need to pass args. to the base class constructor.
-> If both base & derived class have constructors, base class constructor will be executed first.

Constructors in Multiple Inheritance->
-> In multiple inh., base classes are constructed in the order in which they appear in the class declaration.
-> In multilevel inheritance, the constructors are executed in order of inheritance.

Special Syntax

->C++ supports a special syntax for passing arguments to multiple base classes.
->The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes.
->The body is called after the constructors is finished executing.
->Syntax Example:

Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
}

Special Case of Virtual Base Class

->The constructors for virtual base classes are invoked before a non-virtual base class.
->If there are multiple virtual base classes, they are invoked in the order declared.
->Any non-virtual base class are then constructed before the derived class constructor is executed.
->In Multilevel Inheritance it doesn't matter if a class is virtually inherited or not.
*/

/*
Case 1:
class A : public B{};
Order of Execution : B() -> A()

Case 2:
class A : public B,public C{};
Order of Execution : B() -> C()-> A()

Case 3:
class A : public B,public virtual C{};
Order of Execution : C() -> B()-> A()

Case 4:
class A : public virtual B,public virtual C{};
Order of Execution : B() -> C()-> A()

Case 5:
class A{};
class B: public A{};
class C: public B{};
Order of execution -> A()-> B() -> C()
*/
class Mult1
{
public:
    Mult1()
    {
        cout << "LVL1" << endl;
    }
};

class Mult2 : public Mult1
{
public:
    Mult2()
    {
        cout << "LVL2" << endl;
    }
};

class Mult3 : public Mult2
{
public:
    Mult3()
    {
        cout << "LVL3" << endl;
    }
};

class Base1
{
    int data1;

public:
    Base1(int d)
    {
        data1 = d;
        cout << "Base 1 Constructor Called" << endl;
    }
    void printData1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int d)
    {
        data2 = d;
        cout << "Base 2 Constructor Called" << endl;
    }
    void printData2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived1 : public Base1, public Base2
{
    int dData1;

public:
    Derived1(int d1, int d2, int d3) : Base1(d1), Base2(d2)
    {
        dData1 = d3;
        cout << "Derived 1 Constructor Called" << endl;
    }
    void printdData1()
    {
        cout << "The value of dData1 is " << dData1 << endl;
    }
};

class Derived2 : public Base1, public virtual Base2
{
    int dData2;

public:
    Derived2(int d1, int d2, int d3) : Base2(d2), Base1(d1)
    {
        dData2 = d3;
        cout << "Derived 2 Constructor Called" << endl;
    }
    void printdData2()
    {
        cout << "The value of dData2 is " << dData2 << endl;
    }
};

class Derived3 : virtual public Base1, public virtual Base2
{
    int dData3;

public:
    Derived3(int d1, int d2, int d3) : Base1(d1), Base2(d2)
    {
        dData3 = d3;
        cout << "Derived 3 Constructor Called" << endl;
    }
    void printdData3()
    {
        cout << "The value of dData3 is " << dData3 << endl;
    }
};
int main()
{
    /*
    Mult1 m1;
    cout << endl;
    Mult2 m2;
    cout << endl;
    Mult3 m3;
    cout << endl;
    */
    Derived1 d1(1, 2, 3);
    d1.printData1();
    d1.printData2();
    d1.printdData1();
    cout << endl;
    Derived2 d2(4, 5, 6);
    d2.printData1();
    d2.printData2();
    d2.printdData2();
    cout << endl;
    Derived3 d3(7, 8, 9);
    d3.printData1();
    d3.printData2();
    d3.printdData3();
    return 0;
}