#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;
public:
    void setLength(int l)
    {
        if(l<0)
            length = 1;
        else
            length = l;
    }
    void setWidth(int w)
    {
        if(width<0)
            width = w;
        else
            width = w;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
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
    r1.setLength(10);
    r1.setWidth(5);
    cout << r1.area() << endl;
    return 0;
}
