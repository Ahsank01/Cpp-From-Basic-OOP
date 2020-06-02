#include <iostream>
#include <cstring> // built in string methods for C
using namespace std;

int main()
{

    char s[20]; // total 19 characters
    cout << "Enter your name: ";
    cin >> s;
    cout << s << endl;

    char s2[50];
    cout << "Enter your name: ";
    cin.get(s2,50);
    cout << s2 << endl;
    cout << strlen(s2) << endl; // length of the string
    //cin.getline(s,50);

    char a1[20] = "Good";
    char a2[10] = "Morning";
    strcat(a1,a2);
    cout << a1 << endl;

    strncat(a1,a2,3); // 3 letters from a2
    cout << a1 << endl;

    strcpy(a2,a1); // copy a1 to s1
    cout << a2 << endl;

    cout << strstr(a1,a2) << endl; // will start the string from a2 character

    //strchr // will find the character in the string
    cout << strchr(a1,'o') << endl;

    // strcmp // compare 2 strings
    cout << strcmp(a1,a2) << endl;

    //strtol // string to long
    //strtof // string to float
    char q1[10] = "234";
    char q2[10] = "34.11";
    long int x = strtol(q1, NULL, 10);
    float y = strtof(q2, Null);
    cout << x << endl << y << endl;
    char a[20] = "x=10;y=20;z=35";
    cout << strtok(s1,"=;")<<endl;
    char *token=strtok(s1,"=;");
    while(token!=NULL){
        cout << token << endl;
        token=strtok(NULL, "=;");
    }


    return 0;
}
