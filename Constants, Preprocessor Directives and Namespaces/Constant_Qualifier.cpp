#include <iostream>
using namespace std;

class Demo
{
public:
    int x=10,y=20;

    void Display() const
    {
        //x++; cannot modify
        cout << x << " " << y << endl;
    }
};

void func(int &n, int &m)
{
    cout << n << " " << m << endl;
    n++;
}

int main()
{
    const int x=10;
    // x++; CANNOT MODIFY x 

    const int y = 10;
    const int *ptr = &y;
    //++*ptr; Cannot modify
    cout << *ptr << endl;

    int z = 10;
    int * const ptr = &z;
    int q=13;
    // ptr = &q; Cannot do this
    func(z,q);
    cout << "main " << z << " " << q << endl;

    return 0;
}