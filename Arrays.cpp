#include <iostream>
using namespace std;
/*
Array - An array is a data type in which many data items of the same type can be stored in a single variable at the contiguous memory locations
In array, each element is given a specific index.
In array, indexing starts from 0.
It is a mutable datatype ie we can change values of an array
*/
int main()
{
    // Array
    int arr[4] = {1, 11, 21, 31};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    // Array printing with a for loop
    int n = 6;
    int array[n] = {2, 3, 5, 7, 11, 13};
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
    // Address of an array -> To get a pointer to the first element of an array we just have to use the name of the array
    cout << "The address of the first element of the arr is " << arr << endl;
    cout << "The address of the first element of the arr is " << &arr << endl;
    cout << "The address of the first element of the array is " << array << endl;
    cout << "The address of the first element of the array is " << &array << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The address of " << i << "th element of arr is " << &arr[i] << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "The address of " << i << "th element of array is " << &array[i] << endl;
    }
    // We can also dereference an array's address to get it's value
    int *p = arr;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    return 0;
}