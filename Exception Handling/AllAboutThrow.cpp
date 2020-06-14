#include <iostream>
using namespace std;

class MyException
{

};
int main()
{
    int x = 10, y = 0, z;
    // z = x / y;
    // cout << z << endl; Will terminate the program

    try
    {
        if (y == 0)
        {
            throw 1; // can be a string or float or anything.
        }
        z = x / y;
        cout << z << endl;
    }
    catch (int e) // Just change the declaration value depending on the throw
    {
        cerr << "Division by zero " << e << endl;
    }

    // If you want to creat your own exception class
    /*
        try
        {
            if(y==0)
                throw MyException;
            z= x/y;
            cout << z << endl;
        }
        catch(MyException e)
        {
            cerr << "Division by zero" << endl;
        }
    */
    cout << "Bye\n"; // will always execute

    return 0;
}