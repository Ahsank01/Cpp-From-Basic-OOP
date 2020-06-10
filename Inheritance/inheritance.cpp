#include <iostream>
using namespace std;

class Base
{
public:
  int a;
  void display()
  {
    cout << "Display of Base " << a << " " << endl;
  }
};

class Derived:public Base
{
public:
    void show()
    {
      cout << "Derived\n";
    }
};

int main()
{
  Base b;
  b.display();

  Derived d;
  d.display();
  return 0;
}
