#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter number here: ";
  cin >> num;

  if(num == 0) {
    cout << "Digit is 1" << endl;
    return 1;
  }

  int count = 0;
  while(num > 0) {
    int rem = num % 10;
    num = num / 10;
    count++;
  }

  cout << "Total number of digits: " << count << endl;

  return 0;
}