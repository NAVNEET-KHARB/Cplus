#include <iostream>
using namespace std;
int var = 6; // Global variable var
void print()
{
    cout << "\nGlobal var : " << var;
}
int main()
{
    int var = 36; // Local variable var
    cout << "Local var : " << var;
    print();
    var = 216; // Will change local variable var
    cout << "\nLocal var : " << var;
    return 0;
}
// Local variable will always get precedence over global variable
// Local variable has its scope only inside the block/function it is declared in