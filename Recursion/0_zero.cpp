#include <iostream>
using namespace std;

void f(int num) {
  
  if(num == 6) {
    return;
  }
  cout << num << endl;
  f(num + 1);
}

int main() {
  int count = 0;
  f(count);

  cout << "This is me Patra, I'm testing the code below." << endl;
  cout << "Yes, I think code is properly working" << endl;

  return 0;
}