#include <iostream>
using namespace std;
/*
We can dynamically initialize an object's constructor incase of constructor overloading on the basis of user's input.
*/
class BankReturns
{
    int principalAmt;
    int years;
    float interestRate;
    float returnValue;

public:
    BankReturns();
    BankReturns(int p, int y, int r);
    BankReturns(int p, int y, float r);
    void printValue();
};
BankReturns::BankReturns() {}
BankReturns::BankReturns(int p, int y, int r)
{
    principalAmt = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principalAmt;
    for (int i = 0; i < years; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
BankReturns::BankReturns(int p, int y, float r)
{
    principalAmt = p;
    years = y;
    interestRate = r;
    returnValue = principalAmt;
    for (int i = 0; i < years; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
void BankReturns::printValue()
{
    cout << "The return value for principal amount " << principalAmt << " in " << years << " years at " << interestRate << " is " << returnValue << endl;
}
int main()
{
    BankReturns b;
    int p, y, R;
    float r;
    char c;
    cout << "Enter the principal amount : ";
    cin >> p;
    cout << "Enter the years : ";
    cin >> y;
    cout << "Enter P for interest rate in percentage and F for fraction : ";
    cin >> c;
    if (c == 'P')
    {
        cout << "Enter interest rate in percentage : ";
        cin >> R;
        b = BankReturns(p, y, R);
        b.printValue();
    }
    else if (c == 'F')
    {
        cout << "Enter interest rate in fraction : ";
        cin >> r;
        b = BankReturns(p, y, r);
        b.printValue();
    }
    else
    {
        cout << "Enter a valid input" << endl;
    }
    return 0;
}