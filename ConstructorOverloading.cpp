#include <iostream>
using namespace std;
/*
Constructor Overloading -> In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.
>This concept is known as Constructor Overloading and is quite similar to function overloading.
>Overloaded constructors essentially have the same name (exact name of the class) and different by number and type of arguments.
>A constructor is called depending upon the number and type of arguments passed.
>While creating the object, arguments must be passed to let compiler know, which constructor needs to be called.
*/
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printComplex()
    {
        cout << "The no. is " << a << "+i" << b << endl;
    }
};
int main()
{
    Complex c1;
    c1.printComplex();
    Complex c2(1);
    c2.printComplex();
    Complex c3(1, 2);
    c3.printComplex();
    return 0;
}