#include <iostream>
using namespace std;
/*
Friend Classes -> A friend class can access private and protected members of other classes in which it is declared as a friend.
It is sometimes useful to allow a particular class to access private and protected members of other classes.
Syntax->
friend class className

Member Function of Another Class as Friend Function ->
We can also declare a member function of another class as a friend function in C++.
The order of class declaration is imp. Always use Forward declaration and out of class function declaration to avpoid errors.

Forward Declaration refers to the beforehand declaration of the syntax or signature of an identifier, variable, function, class, etc. prior to its usage (done later in the program).
*/
// Forward Declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComp(Complex, Complex);
    int sumComplexComp(Complex, Complex);
};
class Complex
{
    int a, b;
    // Declaration for individual functions
    /*friend int Calculator ::sumRealComp(Complex, Complex);
    friend int Calculator ::sumComplexComp(Complex, Complex);*/

    // Declaring whole class as friendClass
    friend class Calculator;

public:
    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
};
int Calculator::sumRealComp(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumComplexComp(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex c1, c2;
    c1.setData(6, 2);
    c2.setData(5, 15);
    Calculator calc;
    int result = calc.sumRealComp(c1, c2);
    int result1 = calc.sumComplexComp(c1, c2);
    cout << "The sum of real part of complex nos. is " << result << endl;
    cout << "The sum of complex part of complex nos. is " << result1 << endl;
    return 0;
}