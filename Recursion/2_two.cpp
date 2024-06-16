#include <iostream>
using namespace std;

void printName(int i, int num) {
  cout << "Patra" << endl;

  if(i >= num) {
    return;
  }

  printName(i + 1, num);
}

int main() {

  int n, i = 1;
  cout << "How many times do you want to generate: ";
  cin >> n;

  printName(i, n);

  return 0;
}