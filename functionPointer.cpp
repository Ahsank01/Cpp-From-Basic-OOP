#include <iostream>
using namespace std;

// void display()
// {
//     cout << "Hello\n";
// }
//
// int main()
// {
//     void (*fp)(); //declaration of a pointer
//     fp = display; // initilization
//     (*fp)(); // function call
//     return 0;
// }

int max(int x, int y)
{
    return x>y?x:y;
}

int min(int x, int y)
{
    return x<y?x:y;
}
int main()
{
    int (*fp)(int, int);
    fp = max;
    cout << (*fp)(10,5) << endl;

    fp = min;
    cout << (*fp)(10,-1) << endl;
    return 0;
}
