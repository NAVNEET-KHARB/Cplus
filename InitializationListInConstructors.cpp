#include <iostream>
using namespace std;
/*
Initailization List In Constructors ->
Constructor(arguments) : Initializtion-section{
    Constructor Body
}
->Initializtion-section -> It is used for assigning values to variables.
Example->
class Test{
    int a;
    int b;
    public:
    Test(int i, int j):a(i),b(j){
        Constructor Body
    }
};
->We can also use the variable of the class itself to assign values to other variables.
->But it depends on the order of variable declaration.
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(b + i)
    Test(int i, int j) : a(i), b(j)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    Test t(2, 3);
    return 0;
}