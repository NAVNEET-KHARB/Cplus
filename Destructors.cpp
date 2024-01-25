#include <iostream>
using namespace std;
/*
Destructors -> Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed.
Meaning, a destructor is the last function that is going to be called before an object is destroyed.

->A destructor is also a special member function like a constructor.
->Destructor destroys the class objects created by the constructor.
->Destructor has the same name as their class name preceded by a tilde (~) symbol.
->It is not possible to define more than one destructor.
->The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded.
->Destructor neither requires any argument nor returns any value.
->It is automatically called when an object goes out of scope.
->Destructor release memory space occupied by the objects created by the constructor.
->In destructor, objects are destroyed in the reverse of an object creation.
->The thing is to be noted here if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the destructor should use delete to free the memory.
*/
class Num
{
    static int count;

public:
    // Constructor
    Num()
    {
        count++;
        cout << "Creating object number " << count << endl;
    }
    ~Num()
    {
        cout << "Destroying object number " << count << endl;
        count--;
    }
};
int Num::count = 0;
int main()
{
    Num n1, n2, n3;
    {
        Num n4;
    }
    Num n5;
    return 0;
}