#include <iostream>
using namespace std;

class BasicCar
{
public:
    void start(){cout << "Car started" << endl;}
};
class AdvanceCar:public BasicCar
{
public:
    void playMusic(){cout << "Music Playing\n";}
};

int main()
{
    AdvanceCar a;
    a.start();
    a.playMusic();

    BasicCar *ptr = &a;
    ptr->start();
    // ptr->playMusic(); Cannot do this

    BasicCar b;
    // AdvanceCar *q=&b; Cannot do this
    return 0;
}