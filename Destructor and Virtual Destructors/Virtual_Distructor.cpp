#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {cout << "Const of Base\n";}
    virtual ~Base()
    {cout << "Destructor of Base\n";}
};
class Derived:public Base
{
public:
    Derived()
    {cout << "Const of Derived\n";}
    ~Derived()
    {cout << "Destructor of Derived\n";}
};

void fun()
{
    //Derived d;
    Base *p = new Derived();
    delete p;
}

int main()
{
    fun();
}