#include <iostream>
using namespace std;

template<class Temp>
Temp maximum(Temp a, Temp b)
{
    return a>b?a:b;
}

int main()
{
    cout << maximum(12,13)<<endl;
    cout << maximum(12.2f,12.1f)<< endl;
    return 0;
}
