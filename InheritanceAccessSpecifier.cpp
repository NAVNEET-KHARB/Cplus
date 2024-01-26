#include <iostream>
using namespace std;
/*
Inheritance Access Spcifier / Visibility Mode
1)Public Mode: If we derive a subclass from a public base class.
Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.
Syntax ->
class Derived : public Base{};
2)Protected Mode: If we derive a subclass from a Protected base class.
Then both public members and protected members of the base class will become protected in the derived class.
Syntax ->
class Derived : protected Base{};
3)Private Mode: If we derive a subclass from a Private base class.
Then both public members and protected members of the base class will become Private in the derived class.
Syntax ->
class Derived : private Base{};

**The default access specifier in C++ inheritance is private.
**This means that if you do not explicitly specify an access specifier for a member of a base class, it will be inherited as private in the derived class.

Note: The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed.

We have to make a default constructor for base class if we inherit it because the compiler will also call the base class's constructor along with the derived class's constructor.
*/
// Base Class
class Employee
{
private:
    int SSno = 0;

protected:
    float salary;
    int id;

public:
    Employee() {}
    Employee(int inpID, float inpSalary)
    {
        id = inpID;
        salary = inpSalary;
    }
    void showData()
    {
        cout << "ID : " << id << endl
             << "Salary : " << salary << " MPA" << endl;
    }
};
// Public Derived Class
class Programmer : public Employee
{
public:
    char lang;
    Programmer(int inpID, float inpSalary, char inpLang)
    {
        id = inpID;
        salary = inpSalary;
        lang = inpLang;
    }
    void showLang()
    {
        cout << lang << endl;
    }
};

// Showcasing of working of access modifier.
class A
{
public:
    int x = 10;

protected:
    int y = 11;

private:
    int z = 1;
};

class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};

class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};

class D : private A // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};
int main()
{
    Employee navneet(123, 3.5);
    Programmer navneetP(123, 3.5, 'P');
    navneetP.showData();
    navneetP.showLang();
    return 0;
}