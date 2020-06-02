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

// int main()
// {
//     Rectangle r1;
//     Rectangle *ptr;
//     ptr = &r1;
//     ptr->length=10;
//     ptr->width=5;
//     cout << ptr->area() << endl;
//     cout << ptr->perimeter() << endl;
//     return 0;
// }

//In Heap
int main()
{
    Rectangle *ptr=new Rectangle();
    ptr->length=10;
    ptr->width=5;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;

    return 0;
}
