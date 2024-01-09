#include <iostream>
using namespace std;
/*
Structure ->Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, string, bool, etc.).
We create an array using 'struct' keyword.
*/
struct employee
{
    int empId;
    char lang;
    float salary;
};
// We can use typedef keyword to declare a shorthand at initialization
typedef struct person
{
    char gender;
    int personalId;
} per;

int main()
{
    struct employee navneet = {223134, 'c', 5.25};
    per navneetK;
    navneetK.gender = 'm';
    navneetK.personalId = 1123;
    cout << "navneet.empId " << navneet.empId << endl;
    cout << "navneet.lang " << navneet.lang << endl;
    cout << "navneet.salary " << navneet.salary << endl;
    cout << "navneetK.gender " << navneetK.gender << endl;
    cout << "navneetK.personalId " << navneetK.personalId << endl;

    return 0;
}