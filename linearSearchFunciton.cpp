#include <iostream>
using namespace std;

int linearSearch(int A[], int size, int key)
{
    for(int i=0; i<size; ++i)
    {
        if(key==A[i])
            return i;
    }
    return 0;
}

int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(A)/sizeof(A[0]);
    int key=0;

    cout << "Enter a number to see if it is in the list\n> ";
    cin >> key;
    cout << "Key found at index " << linearSearch(A,size,key) << endl;
    return 0;
}
