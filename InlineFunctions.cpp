#include <iostream>
using namespace std;
/*
Inline Functions -> An inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call. This substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it is small.
The compiler may not perform inlining in such circumstances as:
1 If a function contains a loop. (for, while and do-while)
2 If a function contains static variables.
3 If a function is recursive.
4 If a function return type is other than void, and the return statement doesn’t exist in a function body.
5 If a function contains a switch or goto statement.

Static Variables -> When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call.

Default Arguments -> A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. In case any value is passed, the default value is overridden.

Constant Arguments ->In C++, a constant argument is an argument that is declared as constant. This means that the function cannot modify the value of the argument. Constant arguments are useful when you want to pass a value to a function but you don't want the function to be able to change it.
*/
// Inline function
inline int product(int a, int b)
{
    return a * b;
}
// Static variables
int productD(int a, int b)
{
    static int c = 0;
    c++;
    return a * b + c;
}
// Default Argument
float bankPersonCalc(int baseMoney, float factor = 1.052)
{
    return baseMoney * factor;
}
// Constant Args
/*int strlen(const char *p){
    // code block
}*/
int main()
{
    int a, b;
    cout << "Enter the values of a & b : " << endl;
    cin >> a >> b;
    cout << "The product of a & b is " << product(a, b) << endl;
    cout << "The product of a & b is " << product(a, b) << endl;
    cout << "The product of a & b is " << product(a, b) << endl;
    cout << "The product of a & b is " << product(a, b) << endl;
    cout << "The product of a & b is " << productD(a, b) << endl;
    cout << "The product of a & b is " << productD(a, b) << endl;
    cout << "The money after 1 year with baseMoney as 100000 is " << bankPersonCalc(100000) << endl;
    cout << "The money after 1 year with baseMoney as 100000 at custom factor is is " << bankPersonCalc(100000, 1.104) << endl;
    return 0;
}