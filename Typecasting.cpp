#include <iostream>
using namespace std;
/*
The process of converting a value of one data type to another data type.
Two types of typecasting - Implicit and Explicit
1 Implicit - Automatically done by compiler
2 Explicit - Done by user/by using cast operator
*/
int main()
{
    // Implicit typecasting
    int a = 2.33;
    cout << a << endl;
    // Explicit typecasting
    int b = 23;
    float c = 21.29;
    cout << "The value of b+c is " << b + c << endl;
    cout << "The value of b+(int)c is " << b + (int)c << endl;
    cout << "The value of b+int(c) is " << b + int(c) << endl;
    // Both syntaxes (int)a & int(a) are valid
    return 0;
}