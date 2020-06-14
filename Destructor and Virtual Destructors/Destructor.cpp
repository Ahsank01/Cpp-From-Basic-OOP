#include <iostream>
using namespace std;

class Demo
{
    int *p;
public:
    Demo()
    {
        p = new int[10];
        cout << "Constructor of Demo\n";
    }
    ~Demo()
    {
        delete []p;
        cout << "Destructor of Demo\n";
    }
};

void fun()
{
    //Demo d;
    Demo *p = new Demo();
    delete p;
}
int main()
{
    fun();
    return 0;
}