#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter number here: ";
  cin >> num;
  int duplicate = num;
  int sum = 0;

  while(num > 0) {
    int remainder = num % 10;
    sum = sum + (remainder * remainder * remainder);
    num = num / 10;
  }

  if(duplicate == sum) {
    cout << "This is an armstrong.";
  }
  else {
    cout << "This is not an armstrong.";
  }

  return 0;
}