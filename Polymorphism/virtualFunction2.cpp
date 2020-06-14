#include <iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start(){cout << "BasicCar started\n";}
};
class AdvanceCar:public BasicCar
{
public:
    void start(){cout << "AdvanceCar started\n";}
};

int main()
{
    BasicCar *p = new AdvanceCar;
    p->start();
    return 0;
}