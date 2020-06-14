#include <iostream>
using namespace std;

class Outter
{
public:
    // Inner i; CANNOT DO THIS
    void func()
    {
        i.display();
    }

    class Inner
    {
    public:
        void display()
        {
            cout << "Display of Inner Class\n";
        }
    };
    Inner i; // Can declare here
};

int main()
{
    Outter::Inner i; // Only public class is accessible

    return 0;
}