#include <iostream>
using namespace std;

void func(int n)
{
    if(n>0)
    {
        //cout << n << endl; // will print 5 4 3 2 1
        //func(n-1);


        //func(n-1);
        //cout << n << endl; // will print 1 2 3 4 5
    }
}

int main()
{
    int n = 10;
    func(n);
    return 0;
}
