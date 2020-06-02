#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "abcdefg@gmail.com";
    int i = (int)email.find('@');
    cout << i << endl;

    cout << email.substr(0,i-1) << endl;
    return 0;
}
