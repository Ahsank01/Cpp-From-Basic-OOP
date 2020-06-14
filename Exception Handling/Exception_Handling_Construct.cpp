#include <iostream>
using namespace std;

int main()
{
    int x=10, y=0, z;
    z= x/y;
     // cout << z << endl; Will terminate the program

    try
    {
        if(y==0) {throw 1;}
        z = x/y;
        cout << z << endl;
    }
    catch(int e)
    {
        cerr << "Division by zero " << e << endl;
    }
    cout << "Bye\n"; // will always execute
    
    return 0;
}