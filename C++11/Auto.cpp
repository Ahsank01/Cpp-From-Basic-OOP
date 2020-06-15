#include <iostream>
using namespace std;

float fun()
{
    return 2.34f;
}

int main()
{
    auto x = 2*5.7+'a';
    cout << x << endl;

    auto a = fun();
    cout << a;
}