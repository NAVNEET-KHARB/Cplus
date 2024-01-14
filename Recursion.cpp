#include <iostream>
using namespace std;
/*
Recursion -> It  is a technique in which a function calls itself repeatedly until a given condition is satisfied. In other words, recursion is the process of solving a problem by breaking it down into smaller, simpler sub-problems.
*/
// Factorial program using recursion
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
// Fibonacci series without recursion
void fibonacci(int n)
{
    int fib_array[n];
    fib_array[0] = 0;
    fib_array[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fib_array[i] = fib_array[i - 2] + fib_array[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << fib_array[i] << " ";
    }
}
// Fibonacci series using recursion
int fibonacciR(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacciR(n - 2) + fibonacciR(n - 1));
    }
}
int main()
{
    int n1, n2;
    cout << "Enter the no. you want to know the factorial of : " << endl;
    cin >> n1;
    cout << factorial(n1) << endl;
    cout << "Enter the no. of elements you want in your fibonacci series : " << endl;
    cin >> n2;
    fibonacci(n2);
    cout << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << fibonacciR(i) << " ";
    }

    return 0;
}