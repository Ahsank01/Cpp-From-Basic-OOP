#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;
public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int area()
    {
        return length*width;
    }
};

int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout << ptr->area();

    unique_ptr<Rectangle> ptr2;
    ptr2 = move(ptr);
    cout << ptr2->area();
    cout << ptr->area();

    shared_ptr<Rectangle> pt(new Rectangle(10, 5));
    cout << pt->area();

    shared_ptr<Rectangle> pt2;
    pt2 = pt;
    cout << pt2->area();
    cout << pt->area();
    cout << pt.use_count()<<endl;
    return 0;
}