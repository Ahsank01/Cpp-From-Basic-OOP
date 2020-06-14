#include <iostream>
using namespace std;


// First Example
class Test
{
private: int a;
protected: int b;
public: int c;
    friend void func();
};
void func()
{
    Test t;
    // t.a=10; cant access without a friend function
    // t.b=15; //   //     //      //  //    //
    t.a=10;
    t.b=15;
    t.c=9;
}


// ==================================== //
// Second Example
class Your;

class My
{
private: int a;
protected: int b;
public: int c;
    friend Your;
};
class Your
{
public:
    My m;
    void func()
    {
        // m.a=10; Cannot access without a friend function, and before declaring class prototype
        // m.b=15;
        m.a = 10;
        m.b = 15;
        m.c=13;
    }
};

int main()
{
    return 0;
}