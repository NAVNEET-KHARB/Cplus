#include <iostream>
using namespace std;
/*
Reference Variables are those variables which refer to a single value stored in the memeory.
*/
int main()
{
    int x = 23;
    int y = x;
    /*Here x and y aren't reference variables because y makes a copy of x which is stored at different places*/
    cout << "x = " << x << " y = " << y << endl;
    /*Hence when we change the value of x, value of y doesn't change.*/
    x = 14;
    cout << "x = " << x << " y = " << y << endl;
    int a = 13;
    int &b = a;
    /*Here, a & b can be called as reference variables as address of a&b is same*/
    cout << "a = " << a << " b = " << b << endl;
    /*Hence when we change the value of a, value of b also changes*/
    a = 134;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}