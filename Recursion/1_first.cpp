// Print Name n times using recursion

#include <bits/stdc++.h>
using namespace std;

void printName(string n, int a) {
  int i = 0;
  if(i == a) {
    return;
  }
  cout << i << endl;
  i++;

  printName(name, n);
}

int main() {
  int n;
  string name;
  cout << "Enter the value of n here: ";
  cin >> n;
  cout << "Enter name: ";
  cin >> name;

  printName(name, n);

  return 0;
}