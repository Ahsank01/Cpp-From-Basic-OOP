#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,6};
    v.push_back(20);
    v.push_back(23);
    v.pop_back();
    vector<int>::iterator itr;
    cout << "Using Iterator"<< endl;
    for(itr=v.begin(); itr!=v.end(); itr++)
        cout << ++*itr << endl;
    cout << "\nUsing for each loop\n";
    for(int x: v)
        cout << x << endl;

    list<int> a = {1, 2, 3, 4, 6};
    a.push_back(20);
    a.push_back(23);
    a.pop_back();
    list<int>::iterator itrr;
    cout << "Using Iterator" << endl;
    for (itrr = a.begin(); itrr != a.end(); itrr++)
        cout << ++*itrr << endl;
    cout << "\nUsing for each loop\n";
    for (int x : a)
        cout << x << endl;
}