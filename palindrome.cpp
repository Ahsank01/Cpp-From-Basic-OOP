#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int x = 0;
    cout << "Enter a number to see if its a palindrome: ";
    cin >> num;
    x = num;

    int rmdr = 0;
    int reverse = 0;
    while(num>0){
        rmdr=num%10;
        num=num/10;
        reverse=reverse*10+rmdr;
    }

    if(x==reverse){
        cout << "It is a palindrome\n";
    }else{
        cout << "It is not a palindrome\n";
    }
    return 0;
}
