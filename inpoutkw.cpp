#include <iostream>
using namespace std;
/*
'<<' used for output, known as Insertion operator
'>>' used for input, known as Extraction operator
*/
int main()
{
    int first_num, second_num;
    cout << "Enter first number : ";
    cin >> first_num;
    cout << "\nEnter second number : ";
    cin >> second_num;
    int sum = first_num + second_num;
    cout << "\nSum : " << sum;
    return 0;
}