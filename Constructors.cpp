#include <iostream>
using namespace std;
/*
Constructors -> Constructor in C++ is a special method that is invoked automatically at the time of object creation.
-> It is used to initialize the data members of new objects generally.
-> The constructor in C++ has the same name as the class or structure.
-> It constructs the values i.e. provides data for the object which is why it is known as constructor.

Properties of Constructors ->
• Constructor is a member function of a class, whose name is same as the class name.
• Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically, when an object of the same class is created.
• Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as constructor.
• Constructor do not return value, hence they do not have a return type.
*/
class Complex
{
    int a;
    int b;

public:
    Complex()
    {
        a = 10;
        b = 0;
        cout << "Constructor" << endl;
    }
    void printData()
    {
        cout << "The complex no. is " << a << "+i" << b << endl;
    }
};
int main()
{
    Complex c;
    c.printData();
    return 0;
}