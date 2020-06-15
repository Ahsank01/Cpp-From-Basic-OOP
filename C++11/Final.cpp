#include <iostream>
using namespace std;

class Parent //final
{
    virtual void show() final
    {

    }
};
//class Child:Parent /////// Cannot inherit with a final keyword
//{
    //void show() /// cannot override with a final virtual function
   // {
    //}

//};

int main()
{

}