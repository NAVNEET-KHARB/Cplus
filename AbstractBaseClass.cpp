#include <iostream>
using namespace std;
/*
Pure Virtual Functions ->
A pure virtual function is a virtual function that is declared in the base class but has no implementation there.

Abstract Base Class->In C++, an abstract class is a class that contains one or more pure virtual functions.
The purpose of having pure virtual functions is to make the base class abstract,
meaning it cannot be instantiated on its own,
and it serves as a base for derived classes to provide their own implementations for the pure virtual functions.

Pure Abstract Base Class -> A pure abstract class, on the other hand, is often informally referred to as a class that has only pure virtual functions.
In other words, a pure abstract class is a class that consists entirely of pure virtual functions, and it has no concrete (implemented) functions.
*/
// Abstract Base Class
class Animal
{
protected:
    int lambs;

public:
    virtual void sound() = 0;
    void display()
    {
        cout << "No. of lambs : " << lambs << endl;
    }
};
// Pure Abstract Base Class
class Animal1
{
protected:
    int lambs;

public:
    virtual void sound() = 0;
};


class Dog : public Animal
{
public:
    Dog()
    {
        lambs = 4;
    }
    void sound()
    {
        cout << "Woof Woof" << endl;
    }
};
int main()
{
    Dog jaago;
    jaago.display();
    jaago.sound();
    return 0;
}