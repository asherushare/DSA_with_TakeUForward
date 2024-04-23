#include <iostream>
using namespace std;

int main() {
  int num1;
  int num2;
  int min;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  if(num1 > num2) {
    min = num1;
  }
  else {
    min = num2;
  }

  for(int i = min; i >= 1; i--) {
    if(num1 % i == 0 && num2 % i == 0) {
      cout << "GCD is: " << i << endl;
      break;
    }
  }

  return 0;
}