#include <iostream>
using namespace std;
/*
Polymorphism -> The word “polymorphism” means having many forms.
->In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism is a person who at the same time can have different characteristics.
->A man at the same time is a father, a husband, and an employee.
->So the same person exhibits different behavior in different situations. This is called polymorphism.
->Polymorphism is considered one of the important features of Object-Oriented Programming.

Types of Polymorphism
1)Compile-time Polymorphism
2)Runtime Polymorphism

1. Compile-Time Polymorphism
->This type of polymorphism is achieved by function overloading or operator overloading.
->It is also known as early or static binding.

2. Runtime Polymorphism
->This type of polymorphism is achieved by Function Overriding. Late binding and dynamic polymorphism are other names for runtime polymorphism.
->The function call is resolved at runtime in runtime polymorphism.
->In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.
*/

class Complex
{
    int real, imaginary;

public:
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res(0, 0);
        res.real = real + obj.real;
        res.imaginary = imaginary + obj.imaginary;
        return res;
    }
    void display()
    {
        cout << real << "+i" << imaginary << endl;
    }
};
int main()
{
    Complex c1(1, 5), c2(23, 11);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}