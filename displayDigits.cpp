#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int rmdr = 0;
    cout << "Enter a number to reverse it: ";
    cin >> num;

    while(num>0){
        rmdr = num%10;
        num = num/10;
        cout << rmdr;
    }
    return 0;
}
