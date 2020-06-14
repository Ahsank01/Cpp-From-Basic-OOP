#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Display of Base\n"; 
    }
};
class Derived:public Base
{
public:
    void display(int x)
    {
        cout << "Display of derived\n";
    }
};

int main()
{
    Derived d;
    d.Base::display(); // Base display will be called
    d.display(10); // Derived display will be called
    return 0;
}