#include <iostream>
using namespace std;
/*
We can also declare pointers to objects.
Syntax ->
ClassName Obj;
ClassName *Ptr = &Obj;
            OR
ClassName *Pointer new ClassName;

Arrow Operator(->) It is used for dereferencing pointers.
*/
class Complex
{
    int real, imaginary;

public:
    Complex() {}
    Complex(int a, int b) : real(a), imaginary(b) {}
    void changeData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void display()
    {
        cout << "Your no. is " << real << "+" << imaginary << "j" << endl;
    }
};
int main()
{
    Complex c1(2, 5);
    Complex *ptr1 = &c1;
    Complex *ptr2 = new Complex(4, 7);
    // Using dereferencing
    (*ptr1).display();
    // Using Arrow Operator
    ptr2->display();
    return 0;
}