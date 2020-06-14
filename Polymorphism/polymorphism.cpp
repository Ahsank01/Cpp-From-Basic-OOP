#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() {cout << "Car Started\n";}
};
class Innova:public Car
{
public:
    void start() {cout << "Innova Started\n";}
};
class Swift : public Car
{
public:
    void start() { cout << "Swift Started\n"; }
};


int main()
{
    Car *ptr = new Innova();
    ptr->start(); // Innova will start
    ptr = new Swift();
    ptr->start(); // Swift will start
    return 0;
}