#include <iostream>
using namespace std;

int g=5; // Global Variable
void fun()
{
    int a=10;
    a++;
    g++;
    cout << a << " " << g << endl;
}

int main()
{
    cout << g << endl;
    fun();
    cout << g << endl;
}
