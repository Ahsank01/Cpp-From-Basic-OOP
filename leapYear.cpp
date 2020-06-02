#include <iostream>
using namespace std;

int main() {

  int leapYear = 0;

  cout << "Enter a year to check if it is/was a leap year\nYear: ";
  cin >> leapYear;

  if(leapYear%4==0){
    if(leapYear%100==0){
      if(leapYear%400=0)
        cout << "Leap Year\n";
      else
        cout << "Not a leap year\n";
    }
    else
      cout << "Leap Year\n";
  }
  else
    cout << "Not a leap year\n";
  return 0;
}
