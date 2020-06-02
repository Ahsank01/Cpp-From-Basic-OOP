#include <iostream>
using namespace std;

void display()
{
    cout << "Hello\n";
}

float add(float x, float y)
{
    float z = 0;
    z = x+y;
    return z;
}

int maximum(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}

int main()
{
    //float x=2.3, y=7.9, z=0;
    //z=add(x,y);
    //cout << z << endl;

    //display();

    int x=10, y=15, z=5, r=0;
    r=maximum(x,y,z);
    cout << r << endl;
    return 0;
}
