#include <iostream>
using namespace std;
/*
Array of Objects -> We can make array of object by simply using the syntax "className ArrayName[no.]"
*/
class Employee
{
    int empId;
    double salary;

public:
    string name;
    void setId(int id)
    {
        empId = id;
    }
    void calcSalary()
    {
        double empScore;
        cout << "Enter your employer rating to you : ";
        cin >> empScore;
        salary = empScore * 100000;
    }
    void showInfo()
    {
        cout << "Id : " << empId << endl;
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
        cout << endl;
    }
};
int main()
{
    Employee comp1[5];
    // We can also assign already declared objects to the array to simply group up the objects
    /*Employee Navneet;
    Navneet.name = "Navneet";
    Navneet.calcSalary();
    comp1[0] = Navneet;
    comp1[0].setId(1);
    comp1[0].showInfo();*/
    for (int i = 0; i < 5; i++)
    {
        comp1[i].setId(i + 1);
        string name;
        cout << "Enter employee's Name : ";
        cin >> name;
        comp1[i].name = name;
        comp1[i].calcSalary();
    }
    for (int i = 0; i < 5; i++)
    {
        comp1[i].showInfo();
    }

    return 0;
}