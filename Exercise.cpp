#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
/*
Q1 Create a simple calculator class and perform addition,subtraction,multiplication and division.
Q2 Create a scientific calculator class and perform any 4 scientific operations.
Q3 Create a hybrid class which inherits both of the above classes.
*/

// Simple Calculator
class SimpleCalculator
{
    double var1, var2, addition, subtraction, multiplication, division;

public:
    void doCalcSimple(double a, double b)
    {
        var1 = a;
        var2 = b;
        addition = a + b;
        subtraction = a - b;
        multiplication = a * b;
        division = a / b;
    }
    void displayResultsSimple()
    {
        cout << "The addition of the two nos. is " << addition << endl;
        cout << "The subtraction of the two nos. is " << subtraction << endl;
        cout << "The multiplication of the two nos. is " << multiplication << endl;
        cout << "The division of the two nos. is " << division << endl;
    }
};

// Scientific Calculator
class ScientifiCalculator
{
    double var1, var2, cosR1, cosR2, sinR1, sinR2, tanR1, tanR2, logR1, logR2;

public:
    void doCalcScientific(double a, double b)
    {
        var1 = a;
        var2 = b;
        cosR1 = cos(var1);
        cosR2 = cos(var2);
        sinR1 = sin(var1);
        sinR2 = sin(var2);
        tanR1 = tan(var1);
        tanR2 = tan(var2);
        logR1 = log(var1);
        logR2 = log(var2);
    }
    void displayResultsScientific()
    {
        cout << "The cos of " << var1 << " is " << cosR1 << " and cos of " << var2 << " is " << cosR2 << endl;
        cout << "The sin of " << var1 << " is " << sinR1 << " and sin of " << var2 << " is " << sinR2 << endl;
        cout << "The tan of " << var1 << " is " << tanR1 << " and tan of " << var2 << " is " << tanR2 << endl;
        cout << "The log of " << var1 << " is " << logR1 << " and log of " << var2 << " is " << logR2 << endl;
    }
};

// Hybrid Calculator
class HybridCalculator : protected SimpleCalculator, protected ScientifiCalculator
{
public:
    void doCalcHybrid(double a, double b)
    {
        doCalcSimple(a, b);
        doCalcScientific(a, b);
    }
    void displayResultsHybrid()
    {
        displayResultsSimple();
        displayResultsScientific();
    }
};

int main()
{
    SimpleCalculator sim1;
    sim1.doCalcSimple(43, 56);
    sim1.displayResultsSimple();
    ScientifiCalculator sc1;
    sc1.doCalcScientific(89, 34.5);
    sc1.displayResultsScientific();
    HybridCalculator hyb1;
    hyb1.doCalcHybrid(69, 30.46);
    hyb1.displayResultsHybrid();
    return 0;
}