#include <iostream>
using namespace std;

int main()
{
    int A[10];
    int sum = 0;
    float average = 0;
    int counter = 0;
    for(int i=0; i<10; ++i){
        cout << i << ": "; cin >> A[i];
        counter++;
    }

    for(int i=0; i<10;++i){
        sum += A[i];
    }
    cout << "Sum: " << sum << endl;

    average = sum / counter;
    cout << "Average: " << average << endl;
    return 0;
}
