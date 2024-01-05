#include <iostream>
using namespace std;
/*
Loops - Type of control structure which is essentially a sequence of instructions that repeats until a condition is met.
Loops are used to execute a block of code multiple times without writing it repeatedly.
Loops arwe also known as iterating statements.
Types of loops -
1 For loop - A control flow statement that executes a group of statements until a condition is satisfied.
2 While loop - A loop that repeats instructions based on the results of a comparison.
3 Do-while loop - Same as while loop but executes atleast one time.
*/
int main()
{
    // For loop
    // Print first n natural nos
    int n;
    cout << "Enter n nos : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    // While loop
    // Write a program to write nos between a no. and it's square.
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    int num1 = num * num;
    while (num < num1)
    {
        cout << num << endl;
        num += 2;
    }
    // Do-while loop
    int a = 4;
    do
    {
        cout << a << endl;
    } while (a > 4);

    return 0;
}