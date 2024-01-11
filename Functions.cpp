#include <iostream>
using namespace std;
/*
Functions -> A function is a set of statements that takes input, does some specific computation, and produces output. The idea is to put some commonly or repeatedly done tasks together to make a function so that instead of writing the same code again and again for different inputs, we can call this function.
In simple terms, a function is a block of code that runs only when it is called.
Syntax ->
datatype func_name(args){
    code block
    return value
}
*/
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int num1, num2;
    cout << "Enter first number " << endl;
    cin >> num1;
    cout << "Enter second number " << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    return 0;
}