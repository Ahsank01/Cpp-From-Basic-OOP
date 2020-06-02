#include <iostream>
using namespace std;

// Pass By Value
// void swap(int a, int b)
// {
//     int swp;
//     swp=a;
//     a=b;
//     b=swp;
// }
//
// int main()
// {
//     int a=10, b=20;
//     swap(a,b);
//     cout << a << " " << b << endl; // The actual value won't get swapped.
//     return 0;
// }

//
//
//
//
//
//
//
//
// Pass By Address
// void swap(int *a, int *b)
// {
//     int swp;
//     swp=*a;
//     *a=*b;
//     *b=swp;
// }
//
// int main()
// {
//     int a=10, b=20;
//     swap(&a,&b);
//     cout << a << " " << b << endl;
//     return 0;
// }

//
//
//
//
//
//
//
//
//
// Call By Reference
void swap(int &a, int &b)
{
    int swp;
    swp=a;
    a=b;
    b=swp;
}

int main()
{
    int a=10, b=20;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}
