#include <iostream>
#include <string>
using namespace std;
/*
Static Variables in Classes -> As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static variables in a class are shared by the objects.
> There can not be multiple copies of the same static variables for different objects.
> Also because of this reason static variables can not be initialized using constructors.
> Static Variables are declared inside the class and initialized outside the class using "datatype className :: varName" syntax.
> Static variables have a default value of 0.
> They are also known as class varaibles as they belong to the class rather than the object but are different from actual class variables

Static Functions in Classes -> Just like the static data members or static variables inside the class, static member functions also do not depend on the object of the class.
> We are allowed to invoke a static member function using the object and the ‘.’ operator but it is recommended to invoke the static members using the class name and the scope resolution operator.
> Static member functions are allowed to access only the static data members or other static member functions, they can not access the non-static data members or member functions of the class.
*/
// Class declaration
class Person
{
    int id;
    static int count;

public:
    string name;
    void setdata(int iD)
    {
        id = iD;
        count++;
    }
    void showData()
    {
        cout << "The name of employee with id " << id << " is " << name << " @count " << count << endl;
    }
    static void getCount()
    {
        cout << "Count of persons is " << count << endl;
    }
};
int Person::count;
int main()
{
    Person navneet, rohit, manish;
    navneet.setdata(101);
    navneet.name = "Navneet";
    navneet.showData();
    Person::getCount();
    rohit.setdata(102);
    rohit.name = "Rohit";
    rohit.showData();
    Person::getCount();
    manish.setdata(103);
    manish.name = "Manish";
    manish.showData();
    Person::getCount();
    return 0;
}