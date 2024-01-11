#include <iostream>
using namespace std;
/*
Function Prortotype -> Function prototypes are a useful way to ensure that functions are called correctly. They can also be used to document the code and make it easier to understand.
The Function prototype is necessary to serve the following purposes:-
Function prototype tells the return type of the data that the function will return.
Function prototype tells the number of arguments passed to the function.
Function prototype tells the data types of each of the passed arguments.
Also, the function prototype tells the order in which the arguments are passed to the function
*/
// Both are correct ways of function prortotyping
// int mult(int a,int b);
int mult(int,int);
int main()
{
    int num1, num2;
    cout << "Enter first number " << endl;
    cin >> num1;
    cout << "Enter second number " << endl;
    cin >> num2;
    cout << "The sum is " << mult(num1, num2) << endl;
    return 0;
}
int mult(int a, int b)
{
    int c = a * b;
    return c;
}