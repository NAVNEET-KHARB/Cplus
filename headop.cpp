#include <iostream>
/*
There are two types of header files :
1) System Header Files : Comes with the compiler like <iostream>
2) User Defined Header Files : written by the programmers
We can see everything about header files from cppreference.com
*/
using namespace std;

int main()
{
    /*
    Types of operators in C++
    1 Arithmetic
    2 Assignment
    3 Comparison
    4 Logical
    5 Bitwise
    */
    // Arithmetic
    int a = 45, b = 23;
    cout << "The value of a+b is " << a + b << endl;
    cout << "The value of a-b is " << a - b << endl;
    cout << "The value of a*b is " << a * b << endl;
    cout << "The value of a/b is " << a / b << endl;
    cout << "The value of a%b is " << a % b << endl;
    // Assignment
    char d = 'd';
    cout << d << endl;
    // Comparison
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a>b is " << (a > b) << endl;
    cout << "The value of a<b is " << (a < b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    // Logical
    cout << "The value of ((a==b)&&(a>b)) is " << ((a == b) && (a > b)) << endl;
    cout << "The value of ((a==b)||(a>b)) is " << ((a == b) || (a > b)) << endl;
    cout << "The value of (!(a==b)) is " << (!(a == b)) << endl;
    // Bitwise
    cout << "The value of a&b is " << (a & b) << endl;
    cout << "The value of a|b is " << (a | b) << endl;
    cout << "The value of a^b is " << (a ^ b) << endl;
    cout << "The value of a<<b is " << (a << b) << endl;
    cout << "The value of a>>b is " << (a >> b) << endl;
    cout << "The value of ~a is " << (~a) << endl;
    cout << "The value of ~b is " << (~b) << endl;
    return 0;
}