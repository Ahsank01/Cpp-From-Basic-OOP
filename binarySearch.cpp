#include <iostream>
using namespace std;

int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int low = A[0];
    int high = A[9];
    int key = 11;

    while(low<=high){
        int mid = (low+high)/2;
        if(key == mid){
            cout << "Key found at " << mid << endl;
            return 0;
        }else if(key<A[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout << "Key not found!"<< endl;
    return 0;
}
