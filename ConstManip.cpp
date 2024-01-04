#include <iostream>
#include <iomanip>
using namespace std;
/*
Constants - represented by const. They can't be changed. They are read only variable
Manipulators - Those operators which control how data can be displayed.
Operator Precedence - The order in which operators are resolved. Link - https://en.cppreference.com/w/cpp/language/operator_precedence
*/
int main()
{
    // Constants
    const int a = 12;
    cout << a << endl;
    // Here a can't be changed
    // Manipulators
    int b = 134, c = 1441;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;
    cout << "The value of a is " << setw(4) << a << endl;
    cout << "The value of b is " << setw(4) << b << endl;
    cout << "The value of c is " << setw(4) << c << endl;
    return 0;
}