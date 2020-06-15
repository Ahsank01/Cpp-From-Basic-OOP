#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs("My.txt", ios::trunc);
    ofs<<"John\n";
    ofs<<25<<endl;
    ofs<<"cs\n";
    ofs.close();
}