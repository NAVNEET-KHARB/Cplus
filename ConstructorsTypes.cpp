#include <iostream>
#include <math.h>
using namespace std;
/*
1 Default Constructors: Default constructor is the constructor which doesn’t take any argument.
>It has no parameters.
>It is also called a zero-argument constructor.
2. Parameterized Constructors: It is possible to pass arguments to constructors.
>Typically, these arguments help initialize an object when it is created.
>To create a parameterized constructor, simply add parameters to it the way you would to any other function.
>When you define the constructor’s body, use the parameters to initialize the object.
>When an object is declared in a parameterized constructor, the initial values have to be passed as arguments to the constructor function.
>The normal way of object declaration may not work. The constructors can be called explicitly or implicitly.
Explicit call->
className e = className(0, 50);
Implicit call->
className e(0, 50);
*/
class Complex
{
    int a, b;

public:
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
class Point
{
    double x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend double distancebet2(Point, Point);
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
double distancebet2(Point p1, Point p2)
{
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}
int main()
{
    // Complex c1(3, 4);
    // Complex c2 = Complex(4, 8);
    // c1.printComplex();
    // c2.printComplex();
    Point p1(1, 5);
    Point p2(-1, 10);
    p1.displayPoint();
    p2.displayPoint();
    cout << "The distance between point 1 and 2 is " << distancebet2(p1, p2) << endl;
    return 0;
}