#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle(int l=1, int w=1) // constructors
    {
        setLength(l);
        setWidth(w);
    }
    Rectangle(Rectangle &r)
    {
        length=r.length;
        width=r.width;
    }


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
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout << r2.area();
    return 0;
}
