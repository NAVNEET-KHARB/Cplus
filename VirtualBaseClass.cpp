#include <iostream>
using namespace std;
/*
Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances.

Need for Virtual Base Classes: Consider the situation where we have one class A . This class A is inherited by two other classes B and C.
Both these class are inherited into another in a new class D.

Class A are inherited twice to class D. One through class B and second through class C.
When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called?
One inherited through B or the other inherited through C. This confuses compiler and it displays error.

To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual as:
class Derived : visibility-mode virtual Base{};
                OR
class Derived : virtual visibility-mode Base{};
*/

class Student
{
protected:
    int roll_no;
    string name;

public:
    void setDetails(int a, string b)
    {
        roll_no = a;
        name = b;
    }
    void printDetails()
    {
        cout << "Your roll no. is " << roll_no << endl;
        cout << "Your name is " << name << endl;
    }
};
class Test : virtual public Student
{
protected:
    double eng, hin, mat, sci, sst;

public:
    void setMarks(double a, double b, double c, double d, double e)
    {
        eng = a;
        hin = b;
        mat = c;
        sci = d;
        sst = e;
    }
    void printMarks()
    {
        cout << "Marks of " << name << " roll no. " << roll_no << " are :" << endl;
        cout << "English : " << eng << endl;
        cout << "Hindi : " << hin << endl;
        cout << "Maths : " << mat << endl;
        cout << "Science : " << sci << endl;
        cout << "Social Studies : " << sst << endl;
    }
};
class Sports : public virtual Student
{
protected:
    double running, jumping;

public:
    void setSMarks(double a, double b)
    {
        running = a;
        jumping = b;
    }
    void printSMarks()
    {
        cout << "Scores of " << name << " roll no. " << roll_no << " are :" << endl;
        cout << "Running : " << running << endl;
        cout << "Jumping : " << jumping << endl;
    }
};
class Results : public Test, public Sports
{
protected:
    double total, percentage, average;

public:
    void calcResult()
    {
        total = eng + hin + mat + sci + sst + running + jumping;
        average = total / 7;
        percentage = (total / 140) * 100;
    }
    void printResult()
    {
        cout << "Total marks of " << name << " roll no. " << roll_no << " are : " << total << endl;
        cout << "Average marks of " << name << " roll no. " << roll_no << " are : " << average << endl;
        cout << "Percentage of " << name << " roll no. " << roll_no << " are : " << percentage << endl;
    }
};
int main()
{
    Results Pulkit;
    Pulkit.setDetails(31, "Pulkit");
    Pulkit.setMarks(15, 18, 4, 7, 11);
    Pulkit.setSMarks(19, 15);
    Pulkit.calcResult();
    Pulkit.printDetails();
    Pulkit.printMarks();
    Pulkit.printSMarks();
    Pulkit.printResult();
    return 0;
}