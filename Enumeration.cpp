#include <iostream>
using namespace std;
/*
Enumeration -> Enumeration (Enumerated type) is a user-defined data type that can be assigned some limited values. These values are defined by the programmer at the time of declaring the enumerated type.
If we assign a float value to a character value, then the compiler generates an error. In the same way, if we try to assign any other value to the enumerated data types, the compiler generates an error. Enumerator types of values are also known as enumerators. It is also assigned by zero the same as the array. It can also be used with switch statements.
*/
int main()
{
    // Declaring an Enumeration
    enum color
    {
        Red,
        Blue,
        Green,
        Violet
    };
    color c1 = Red;
    color c2 = Blue;
    color c3 = Green;
    color c4 = Violet;
    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;
    cout << c4 << endl;
    // By default, the starting code value of the first element of the enum is 0 (as in the case of the array). But it can be changed explicitly.
    enum vals
    {
        val1 = 1,
        val2 = 10,
        val3
    };
    vals v1 = val1;
    vals v2 = val2;
    vals v3 = val3;
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v3 << endl;
    return 0;
}