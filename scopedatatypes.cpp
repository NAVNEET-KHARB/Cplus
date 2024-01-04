#include <iostream>
using namespace std;
int var = 6; // Global variable var
int main()
{
    int var = 36; // Local variable var
    cout << "Local var : " << var;
    var = 216; // Will change local variable var
    cout << "\nLocal var : " << var;
    cout << "\nGlobal var : " << ::var;
    // Local variable will always get precedence over global variable
    // Local variable has its scope only inside the block/function it is declared in
    // If we want to use global variable then we can use scope resolution operator(::) which is used to specify that we want to use global variable
    return 0;
}