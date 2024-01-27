#include <iostream>
using namespace std;
/*
Single inheritance is a type of inheritance in which a class inherits from only one parent class.
This is the simplest form of inheritance and is the most commonly used.
To create a single inheritance relationship, you use the public, private, or protected keywords to specify the access level of the inherited members.
*/
// Diagram -> "./InheritanceSingle.png"

// Base Class
class Base
{
    int data1, data2;

public:
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 19;
    data2 = 41;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

// Derived Class from Base Class(Single Inheritance)
class Derived : public Base
{
    int data3;

public:
    void prcocessData();
    void getData();
};

void Derived ::prcocessData()
{
    data3 = (getData2() * getData1());
}

void Derived ::getData()
{
    cout << "Data 1 : " << getData1() << endl
         << "Data 2 : " << getData2() << endl
         << "Data 3 : " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.prcocessData();
    der.getData();
    return 0;
}