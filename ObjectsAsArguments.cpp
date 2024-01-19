#include <iostream>
using namespace std;
/*
Objects As Arguments -> We can give objects as arguments to the class methods and do operations on them.
Syntax:
class className{
    // vars
    public :
        returntype funcName(className objName){
            // code
        }
};
*/
class Vector
{
    int i, j, k;

public:
    void setValues(int i1, int j1, int k1)
    {
        i = i1;
        j = j1;
        k = k1;
    }
    void addition(Vector v1, Vector v2)
    {
        i = v1.i + v2.i;
        j = v1.j + v2.j;
        k = v1.k + v2.k;
    }
    void printVector()
    {
        cout << "The vector is " << i << "i+" << j << "j+" << k << "k" << endl;
    }
};
int main()
{
    Vector v1, v2, v3;
    v1.setValues(1, 2, 3);
    v2.setValues(4, 5, 6);
    v3.addition(v1, v2);
    v1.printVector();
    v2.printVector();
    v3.printVector();
    return 0;
}