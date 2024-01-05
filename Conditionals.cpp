#include <iostream>
using namespace std;
/*
Control Structures - the code blocks or statements which control the flow of a program
1 Sequential Structures
2 Selection Structures
3 Loop Structures
Conditionals - Control structures which act on the basis of resolution of a condition. They are also known as Selection Structures
If-else - Executes a set of condition on either True/False
SwitchCase - Executes a set of condition on the basis of expression's value
*/
int main()
{
    // If-else Cond
    // Write a program to check if a user has voting rights or not.
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;
    if (age > 18)
    {
        cout << "You are eligible for voting rights" << endl;
    }
    else if (age == 18)
    {
        cout << "You are in the waiting list" << endl;
    }
    else
    {
        cout << "You are not eligible for voting rights" << endl;
    }
    // Switch Case
    // Write a program which checks if a no. is in lottery draw or not
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    switch (num)
    {
    case 32:
        cout << "You've won the first round prize" << endl;
        break;
    case 10:
        cout << "You've won the second round prize" << endl;
        break;
    case 14:
        cout << "You've won the third round prize" << endl;
        break;
    default:
        cout << "Better luck next time" << endl;
        break;
    }
    return 0;
}