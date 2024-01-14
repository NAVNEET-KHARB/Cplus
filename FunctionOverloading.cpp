#include <iostream>
#include <cmath>
using namespace std;
/*
Function Overloading -> Function overloading is a feature in C++ that allows you to have multiple functions with the same name, but with different parameters. This can be useful for providing different implementations of a function for different data types, or for providing different levels of functionality.
To overload a function, you simply need to define multiple functions with the same name, but with different parameter lists. The compiler will then choose the correct function to call based on the types of the arguments that are passed in.
*/
// Sum function for diff. no. of inputs
// For 2 nos
int sum(int a, int b)
{
    return a + b;
}
// For 3 nos
int sum(int a, int b, int c)
{
    return a + b + c;
}
// Volume calculation for diff shapes
// For cylinder
double volume(double r, double h)
{
    return (3.14 * pow(r, 2) * h);
}
// For cube
double volume(double a)
{
    return pow(a, 3);
}
// For cuboid
double volume(double l, double b, double h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3, 5 and 6 is " << sum(3, 5, 6) << endl;
    cout << "The volume of a cylinder with radius 3.12 and height 2 is " << volume(3.12, 2) << endl;
    cout << "The volume of a cube with side 4.56 is " << volume(4.56) << endl;
    cout << "The volume of a cuboid with length 2, breadth 3.15 and height 2.02 is " << volume(2, 3.15, 2.02) << endl;
    return 0;
}