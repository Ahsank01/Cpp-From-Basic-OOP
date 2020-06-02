#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello World!";
    int count = 0;
    for(int i=0; i<str.length(); ++i){
        count++;
    }
    cout << count << endl;
    return 0;
}
