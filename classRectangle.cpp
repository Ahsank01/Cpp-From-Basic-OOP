#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length=0;
    int width=0;

    int area()
    {
        return length*width;
    }
    int perimeter()
    {
        return 2*(length+width);
    }
};

int main()
{
    Rectangle r1;
    r1.length=10;
    r1.width=5;
    cout << "Area is " << r1.area() << endl;
    cout << "Perimeter is " << r1.perimeter() << endl;
    return 0;
}
