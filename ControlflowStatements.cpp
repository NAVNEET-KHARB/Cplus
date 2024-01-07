#include <iostream>
using namespace std;
/*
Control flow statements are those statements which are used to control the flow of looping structures or a program
1 break - It immediately stops further execution and comes out of the code block.
2 continue - The execution of a particular instance is skipped while other iterations happen as intended.
3 return - A return statement causes execution to leave the current subroutine and resume at the point in the code immediately after the instruction which called the subroutine
*/
// return
int increment(int a)
{
    a++;
    return a;
}
int main()
{
    // break
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 != 0)
        {
            break;
        }
        cout << i << endl;
    }

    // continue
    int a = 0;
    while (a < 5)
    {
        if (a % 2 != 0)
        {
            a++;
            continue;
        }
        cout << a << endl;
        a++;
    }

    // return
    int b = 2;
    b = increment(b);
    cout << b << endl;
    return 0;
}