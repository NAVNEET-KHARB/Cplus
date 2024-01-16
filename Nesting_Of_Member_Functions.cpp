#include <iostream>
#include <string>
using namespace std;
/*
Nesting Of Member Functions -> Nesting of member functions in C++ is a feature that allows you to call one member function from another member function of the same class. This can be useful for code reuse and organization.
*/
// Creating a class
class Binary
{
private:
    string bin_no;

public:
    void read_bin(void);
    void check_bin(void);
    void ones_complement(void);
    void display_bin(void);
};
void Binary::read_bin()
{
    cout << "Enter a binary no. : ";
    cin >> bin_no;
}
void Binary::display_bin()
{
    cout << "Your Binary no. is : ";
    for (unsigned i = 0; i < bin_no.length(); i++)
    {
        cout << bin_no.at(i);
    }
    cout << endl;
}
void Binary::check_bin()
{
    for (unsigned i = 0; i < bin_no.length(); i++)
    {
        if (bin_no.at(i) != '0' && bin_no.at(i) != '1')
        {
            cout << "The no. isn't binary." << endl;
            exit(0);
        }
    }
}
void Binary::ones_complement()
{
    for (unsigned i = 0; i < bin_no.length(); i++)
    {
        if (bin_no.at(i) == '0')
        {
            bin_no.at(i) = '1';
        }
        else if (bin_no.at(i) == '1')
        {
            bin_no.at(i) = '0';
        }
    }
    // Nesting of a member function
    display_bin();
}
int main()
{
    Binary b_0;
    b_0.read_bin();
    b_0.check_bin();
    b_0.display_bin();
    b_0.ones_complement();
    return 0;
}