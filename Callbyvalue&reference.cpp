#include <iostream>
using namespace std;
/*
Call by Value -> In C++, call by value is the default method when passing arguments to a function. When you pass an argument by value, a copy of the argument's value is passed to the function. This means that any changes made to the argument inside the function will not affect the original argument outside the function.
Call by Reference -> In contrast, call by reference is a method where the address of the argument is passed to the function instead of a copy of the argument's value. This means that any changes made to the argument inside the function will affect the original argument outside the function.
In C++, we can use call by reference by both pointer variables and reference variables.
*/
// Call by Value
// It willn't swap the two nos.
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Call by Reference using Pointer Variables
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by reference using Reference Variables
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int &swapReferenceR(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 4;
    int y = 9;
    cout << "The no x is " << x << " and y is " << y << endl;
    // swap(x, y); // This willn't swap x and y.
    // swapPointer(&x, &y); // This will swap x and y using pointer variables.
    // swapReference(x, y); // This will swap x and y using reference variables.
    swapReferenceR(x, y) = 223134; // Custom referencevariable return usecase. It will give the value to the returned reference variable if we assign a value to the function while calling.
    cout << "The no x is " << x << " and y is " << y << endl;
    return 0;
}