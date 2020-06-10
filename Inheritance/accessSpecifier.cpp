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
        if (l>0)
            length=l;
        else
        {
            length=1;
        }
        
    }
    void setWidth(int w)
    {
        if(w>0)
            width=w;
        else
            width=1;
    }
    int getLength(){return length;}
    int getWidth(){return width;}
    int area(){return length*width;}
    int perimeter(){return 2*(length+width);}
};

int main()
{
    Rectangle r1;
    r1.setLength(-10);
    r1.setWidth(5);
    cout << r1.area() << endl;
    cout << "Length " << r1.getLength() << endl;
    cout << "Width " << r1.getWidth() << endl;

    return 0;
}