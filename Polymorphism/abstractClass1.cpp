#include <iostream>
using namespace std;

class Car // Abstract Class
{
public:
    virtual void start() = 0; // pure virtual function
};
class Innova : public Car
{
public:
    void start() { cout << "Innova Started\n"; }
};
class Swift : public Car
{
public:
    void start() { cout << "Swift Started\n"; }
};

int main()
{
    return 0;
}