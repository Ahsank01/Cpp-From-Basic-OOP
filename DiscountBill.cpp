#include <iostream>
using namespace std;

int main() {

  float billAmount = 0;
  float discountAmount = 0;
  cout << "Enter the bill amount: $";
  cin >> billAmount;

  if(billAmount < 100){
    cout << "No Discount!!\n";
  }
  else if(billAmount >= 100 && billAmount < 500){
    discountAmount = billAmount * 0.10;
    billAmount = billAmount - discountAmount;
    cout << billAmount << endl;
  }
  else if(billAmount >= 500){
    discountAmount = billAmount *0.20;
    billAmount -= discountAmount;
    cout << billAmount << endl;
  }
}
