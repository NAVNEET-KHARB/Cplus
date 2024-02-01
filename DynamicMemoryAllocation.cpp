#include <iostream>
using namespace std;
/*
->Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer.
->Dynamically allocated memory is allocated on Heap, and non-static and local variables get memory allocated on Stack.
->For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated.
->For dynamically allocated memory like “int *p = new int[10]”, it is the programmer’s responsibility to deallocate memory when no longer needed.
->If the programmer doesn’t deallocate memory, it causes a memory leak (memory is not deallocated until the program terminates).
->C uses the malloc() and calloc() function to allocate memory dynamically at run time and uses a free() function to free dynamically allocated memory.
->C++ supports these functions and also has two operators new and delete, that perform the task of allocating and freeing the memory in a better and easier way.

new operator
->The new operator denotes a request for memory allocation on the Free Store.
->If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.

Syntax to use new operator

pointer-variable = new data-type;
Here, the pointer variable is the pointer of type data-type. Data type could be any built-in data type including array or any user-defined data type including structure and class.

int *p = NULL;
p = new int;
            OR
int *p = new int;

pointer-variable = new data-type(value);

Allocate a block of memory: a new operator is also used to allocate a block(an array) of memory of type data type.

pointer-variable = new data-type[size];
where size(a variable) specifies the number of elements in an array.
int *p = new int[10];

delete operator
Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language.
Syntax:

delete pointer-variable;
Here, the pointer variable is the pointer that points to the data object created by new.

delete p;
delete q;
To free the dynamically allocated array pointed by pointer variable, use the following form of delete:

delete[] pointer-variable;

delete[] p;
*/
int main()
{
    int *a = NULL;
    a = new int(2);
    int *p = new int(5);
    // delete a;
    // delete p;
    cout << "The value at a is " << *a << endl;
    cout << "The value at p is " << *p << endl;
    int *arr = new int[5];
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    delete[] arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}