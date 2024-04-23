#include <iostream>
using namespace std;

int main()
{
  int num1;
  int num2;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  while(num1 > 0 && num2 > 0) {
    if(num1 > num2) {
      num1 = num1 % num2;
    }
    else {
      num2 = num2 % num1;
    }
  }

  if(num1 == 0) {
    cout << "gcd is: " << num2 << endl;
  }
  else {
    cout << "gcd is: " << num1 << endl;
  }

  return 0;
}