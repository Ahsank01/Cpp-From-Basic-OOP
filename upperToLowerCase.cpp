#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "WELCOME";
    for(int i=0; i<str.length(); ++i){
        str[i] += 32;
    }
    cout << str << endl;

    // string str2 = "ahsan";
    // if(str2[0] >= 97)
    //     str2[0] -= 32;
    // cout << str2 << endl;

    string str2 = "WeLcOmE5";
    for(int i=0; i<str2.length(); ++i){
        if(str2[i]>=97 && str2[i]<=122)
            str2[i] -= 32;
    }
    cout << str2 << endl;
    return 0;
}
