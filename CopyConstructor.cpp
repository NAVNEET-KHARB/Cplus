#include <iostream>
using namespace std;
/*
Copy Constructor -> A copy constructor is a member function that initializes an object using another object of the same class.
In simple terms, a constructor which creates an object by initializing it with an object of the same class, which has been created previously is known as a copy constructor.
Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
Copy constructor takes a reference to an object of the same class as an argument.
Syntax ->
            Sample(Sample &t)
            {
                id=t.id;
            }

The process of initializing members of an object through a copy constructor is known as copy initialization.

It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to the same class on a member by member copy basis.

The copy constructor can be defined explicitly by the programmer. If the programmer does not define the copy constructor, the compiler does it for us.

Methods of calling copy constructor ->
1) Sample z(x);
2) Sample z = x;
But if we call like this
Sample z;
z = x;
***** IMP -> Then the copy constructor won't be called but z will take the value in x
*/
class Number
{
    int n = 0;

public:
    Number() {}
    Number(int num)
    {
        n = num;
    }
    // Copy constructor
    Number(Number &obj)
    {
        cout << "Copy Constructor invoked !!!" << endl;
        n = obj.n;
    }
    void show()
    {
        cout << "The number is " << n << endl;
    }
};
int main()
{
    Number x, y(23), a;
    Number z(y);  // Copy constructor will be called
    a = z;        // Copy constructor won't be called but 'a' will take the value present in 'z'.
    Number b = z; // Copy constructor will be called
    x.show();
    y.show();
    z.show();
    a.show();
    b.show();
    return 0;
}