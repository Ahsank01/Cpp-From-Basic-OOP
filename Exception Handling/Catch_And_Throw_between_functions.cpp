#include <iostream>
using namespace std;

int division(int a, int b)
{
    if(b==0)
        throw 1;
    return a/b;
}

int main()
{
    int x = 10, y = 0, z;
    z = x / y;
    // cout << z << endl; Will terminate the program

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (int e)
    {
        cerr << "Division by zero "<< e << endl;
    }
    cout << "Bye\n"; // will always execute

    return 0;
}