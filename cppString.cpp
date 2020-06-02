#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string str = "Hello";
    // cout << str << endl;
    //
    // string str1;
    // cin >> str1;
    // getline(cin, str);
    // cout << str1 << endl;

    // String Methods
    /*
    * s.length()
    * s.size()
    * s.capacity()
    * s.resize()
    * s.max_size()
    * s.clear()
    * s.clear()
    * s.empty()
    * etc......
    */

    // string s1 = "Hello World";
    // cout << s1.length() << endl;
    // cout << s1.size() << endl;
    // cout << s1.capacity() << endl; // capacity of the array string
    // //cout << s1.resize(50) << endl; //increase the capacity of the array string
    // cout << s1.max_size() << endl; // maximum characters allowed
    // //cout << s1.clear() << endl; // clear data from the string
    // if(str.empty())
    //     cout << "Empty" << endl;
    // else
    //     cout << "String is " << s1 << endl;
//
//
//
//
//
//
//
//

    // String Functions
    /*
    * s.append("Hello")
    * s.insert(3, "kk")
    * s.replace(3,5,"aa")
    * s.erase()
    * s.push_back('z')
    * s.pop_back()
    * s1.swap(s2)
    */

    //string str = "Hello";
    //string str1 = "World";
    //str.append(" World");
    //cout << str << endl;
    //cout << str.insert(3,"lol") << endl;
    //cout << str.replace(2,2, "pp");
    //cout << str.erase();

    //str.push_back('H');
    //cout << str << endl;

    //str.pop_back('H');
    //cout << str << endl;

    //str.swap(str2);
    //cout << str << endl;

//
///
//
//
//
//
//
//
//
//
//

    //Copy and Find functions
    /*
    * s.copy(char des[])
    * s.find(str) or char
    * s.rfind(str)
    * s.find_first_of()
    * s.find_last_of()
    * s.substr(start, number)
    * s.compare(str)
    */

    //string s= "Welcome";
    // char str[10];
    // s.copy(str, s.length());
    // cout << str << endl;
    //
    // s.copy(str, 3);
    // str[3] = '\0';
    // cout << str << endl;

    //string str = "How are you";
    //cout << str.find("are") << endl;

     //string str = "Hello World";
     //string str2 = "Hi World";
    // cout << str.find_first_of('l');
    // cout << str.find_first_of('l',3); // start from index 3
    // cout << str.find_first_of("le");
    // cout << str.find_last_of('l');
    //cout << str.substr(3);
    //cout << str.compare(str2);

    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
        // String operators
        /*
        * at()
        * front()
        * back()
        * []
        * +
        * =
        */

    // string str = "Holiday";
    // cout << str.at(4) << endl;
    // cout << str[4] << endl;
    // str[4] = 'M';
    // cout << str << endl;

    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
        // String iterator
        /*
        * string::iterator // left to right
        * begin()
        * end()
        * reverse_iterator // right to left
        * rbegin()
        * rend()
        */
    // string str = "today";
    // string::iterator it;
    // // for(it=str.begin(); it!=str.end(); ++it){
    // //     cout << *it;
    // // }
    // // cout << endl;
    // //
    // // for(it=str.begin(); it!=str.end(); ++it){
    // //     *it -= 32;
    // // }
    // // cout << str;
    // // cout << endl;
    //
    // for(it=str.rbegin(); it!=str.rend(); ++it){
    //     cout << *it;
    // }
    //
    // for(int i=0; str[i]!='\0'; ++i){
    //     str[i] -= 32;
    // }
    // cout << endl;


    return 0;
}
