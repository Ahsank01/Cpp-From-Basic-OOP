#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area() {cout << "Area of Rectangle" << endl;}
};
class Cuboid:public Rectangle
{
public:
    void volume(){cout << "Cuboid Volume" << endl;}
};

int main()
{
    Cuboid c;
    c.area();
    c.volume();

    Rectangle *ptr = &c;
    ptr->area();
    // ptr->volume(); Cannot access

    Rectangle r;
    // Cuboid *q = &r; Cannot do this
    return 0;
}