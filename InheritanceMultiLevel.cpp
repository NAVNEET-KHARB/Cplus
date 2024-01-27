#include <iostream>
using namespace std;
/*
Multilevel Inheritance in C++ is the process of deriving a class from another derived class.
When one class inherits another class it is further inherited by another class. It is known as multi-level inheritance.

Diagram -> "./InheritanceMultiLevel.png"
*/

// Base Class
class Student
{
protected:
    int roll_no;

public:
    void setRoll(int);
    void getRoll();
};

void Student ::setRoll(int r)
{
    roll_no = r;
}

void Student ::getRoll()
{
    cout << "The roll no is " << roll_no << endl;
}

// Derived Class Lvl 1
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks();
};

void Exam ::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam ::getMarks()
{
    cout << "The marks in maths are : " << maths << endl;
    cout << "The marks in physics are : " << physics << endl;
}

// Derived Class Lvl 2
class Result : public Exam
{
    float percentage;

public:
    void setPer()
    {
        percentage = (maths + physics) / 2;
    }
    void display()
    {
        getRoll();
        getMarks();
        cout << "The percentage is : " << percentage << endl;
    }
};

int main()
{
    Result s1;
    s1.setRoll(223134);
    s1.setMarks(95.2, 98);
    s1.setPer();
    s1.display();
    return 0;
}