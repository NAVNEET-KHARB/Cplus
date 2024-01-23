#include <iostream>
using namespace std;
/*
Friend Functions -> A friend function can be granted special access to private and protected members of a class in C++.
They are the non-member functions that can access and manipulate the private and protected members of the class for they are declared as friends.
However, we can't use friend functions by using dot (.) operator with the objects as it is not a member of that class.
Syntax ->
class className{
    public:
    friend returntype funcName(args);
}
className funcName(args){}

Properties of Friend Functions ->
1) Not in the scope of class.
2) It can't be called from the object of the class.
3) Can be invoked without the help of any object.
4) Usually contains objects as args.
5) Can be declared inside public or private section of the class.
6) It cannot accessthe members directly by their names and need obj.member to access any member.
*/
class Complex
{
    int a, b;

public:
    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printData()
    {
        cout << "Your number is " << a << "+i" << b << endl;
    }
    friend Complex sumComplex(Complex o1, Complex o2);
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printData();
    c2.setData(9, 10);
    c2.printData();
    c3 = sumComplex(c1, c2);
    c3.printData();
    return 0;
}