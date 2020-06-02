#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle();
    Rectangle(int length, int width);
    Rectangle(Rectangle &r);
    int getLength(){return length;}
    int getWidth(){return width;}
    void setLength(int length);
    void setWidth(int width);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main()
{
    Rectangle r1(10,5);
    cout << r1.area() << endl;
    Rectangle r2(&r1);
    cout << r2.area() << endl
    return 0;
}

Rectangle::Rectangle()
{
    length = 1;
    width = 1;
}
Rectangle::Rectangle(int length, int width)
{
    this->length=length;
    this->width=width;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    width = r.width;
}
void Rectangle::setLength(int length)
{
    this->length=length;
}
void Rectangle::setWidth(int width)
{
    this->width=width;
}
int Rectangle::area()
{
    return length*width;
}
int Rectangle::perimeter()
{
    return 2*(length+width);
}
bool Rectangle::isSquare()
{
    return length==width;
}
Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed\n";
}
