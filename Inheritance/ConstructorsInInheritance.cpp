#include <iostream>
using namespace std;

class Base
{
public:
    Base(){cout << "Non-param Base" << endl;}
    Base(int x){cout << "param of base " << x << endl;}
};
class Derived:public Base{
public:
    Derived(){cout << "Non-Param Derived"<< endl;}
    Derived(int y){cout << "Param of Derived " << y << endl;}
    Derived(int x, int y):Base(x) 
    { 
        cout << "Param of Derived " << y << endl; 
    }
};

int main() {
    Derived d(5,10);
    return 0;
}