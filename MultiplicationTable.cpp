#include <iostream>
using namespace std;

int main()
{
  int n = 1;
  cout << "Enter a number for it's multiplication table: ";
  cin >> n;

  for(int i=1; i<11; ++i)
  {
    cout << n << " x " << i << " = " << n*i << endl;
  }

  return 0;
}
