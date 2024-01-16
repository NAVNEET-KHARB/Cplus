#include <iostream>
using namespace std;
/*
There are two types of programming approach ->
1 POPs(Procedure Oriented Programming) -> Procedural programming is a programming paradigm that focuses on the functions and procedures that make up a program. In procedural programming, data is separate from the functions that operate on it, and the program is executed in a linear, top-down fashion.
2 OOPs -> Object-oriented programming (OOP) is a programming paradigm that uses "objects" to design applications and computer programs. "Objects" are data structures consisting of data fields and methods together with their interactions. This makes it easier to create complex programs that are easier to maintain and reuse. OOP is based on several concepts such as Encapsulation, Abstraction, Inheritance, and Polymorphism.

**Basic concepts in OOPs**
1 Classes -> A class is like a blueprint for an object. A Class is a user-defined data type that has data members and member functions.
2 Objects -> An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
3 Data Abstraction -> Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.
4 Data Encapsulation -> Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.
5 Inheritance -> The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming.
6 Polymorphism -> The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.
7 Dynamic Binding -> Code which will execute isn't known until execution of program.

**Benefits of OOPs**
1 Better code reusability sing Objects & Inheritance.
2 Priniple of data hiding helps build secure systems.
3 Multiple objects can co-exist without any interference.
4 Software complexity can be easily managed.

Access Modifiers -> Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding.
1 Public Access Modifier -> All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too. The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class.
2 Private Access Modifier -> The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of the class.
3 Protected Access Modifier -> The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well.

We can declare objects along with the class declaration like this :
class Person{
    class definition
}navneet,shivani,vani;
*/
// Class
class Employee
{
private:
    int iD, holidaysR;
    double bonusFactor;

public:
    string name, role;
    void setData(int a, int b, double c);
    void printData()
    {
        cout << "The name of the Employee is " << name << endl;
        cout << "The role of the Employee is " << role << endl;
        cout << "The holidays remaining of the Employee is " << holidaysR << endl;
        cout << "The iD of the Employee is " << iD << endl;
        cout << "The bonus factor of the Employee is " << bonusFactor << endl;
    }
};
void Employee::setData(int a, int b, double c)
{
    iD = a;
    holidaysR = b;
    bonusFactor = c;
}
int main()
{
    // Creating an object of class Employee
    Employee navneet;
    navneet.name = "Navneet";
    navneet.role = "Data Scientist";
    navneet.setData(2134, 15, 2.03);
    navneet.printData();
    return 0;
}