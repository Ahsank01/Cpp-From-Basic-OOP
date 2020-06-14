#include <iostream>
using namespace std;

class Base
{
public: 
    virtual void func1() = 0;
    virtual void func2() = 0;
};
class Derived:public Base
{
public:
    void func1()
    {
        cout << "Hello\n";
    }
    void func2()
    {
        cout << "Func2 from derived\n";
    }
};

int main()
{
    Derived d;
    d.func1();
    d.func2();
    return 0;
}