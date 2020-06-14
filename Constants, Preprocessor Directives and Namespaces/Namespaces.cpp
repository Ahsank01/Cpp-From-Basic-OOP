#include <iostream>
using namespace std;

namespace First
{
    void func()
    {
        cout << "First\n";
    }
};

namespace Second
{
    void func()
    {
        cout << "Second\n";
    }
};

using namespace First;
int main()
{
    func();
}