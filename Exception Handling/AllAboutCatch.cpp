#include <iostream>
using namespace std;

 class MyException1:exception
 {
 };
 class MyException2:public MyException1
 {
 };

int main()
{
    try
    {
        throw MyException1();
    }
    catch(int e)
    {
        cerr << "Integar Catch " << e << "\n";
    }
    catch(double e)
    {
        cerr << "Double Catch " << e << endl;
    }
    catch(char e)
    {
        cerr << "Character Catch " << e << endl;
    }
    //catch(MyException1 e)
    //{
      //  cerr << "My Class catch " << e << endl;
    //}
    catch(...)
    {
        cerr << "All other catchec/Universal Catch\n";
    }
    
    return 0;
}