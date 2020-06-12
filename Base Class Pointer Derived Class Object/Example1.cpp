#include <iostream>
using namespace std;

class Base
{
public:
    void func1()
    {
        cout << "Func1 of base" << endl;
    }
};
class Derived:public Base
{
public:
    void func2()
    {
        cout << "Func2 of derived" << endl;
    }
};
int main()
{
    Derived d;
    d.func1();
    d.func2();

    Base *ptr = &d;
    ptr->func1();
    // ptr->func2(); Cannot be called

    // Derived *ptr=&b; Cannot do this
    return 0;
}