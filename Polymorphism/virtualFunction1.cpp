#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Display of Base\n";
    }
};
class Derived : public Base
{
public:
    void display() // function overriding
    {
        cout << "Display of derived\n";
    }
};

int main()
{
    Derived d;
    d.display(); 
    Base *ptr=&d;
    ptr->display();
    
    return 0;
}