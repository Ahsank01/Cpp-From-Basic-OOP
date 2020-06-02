#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i: A){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
