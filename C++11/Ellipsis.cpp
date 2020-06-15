#include <iostream>
using namespace std;

int sum(int n, ...)
{
    va_list list;
    __crt_va_start(list,n);

    int x;
    int z = 0;
    for(int i=0; i<n; ++i)
    {
        x = __crt_va_arg(list, int);
        z+=x;
    }
    return z;
}

int main()
{
    cout << sum(3,10,20,10) << endl;
    cout << sum(5, 1,2,3,4,5) << endl;
}