// Not understood clearly enough


#include <bits/stdc++.h>
using namespace std;

int main() {

  int size;
  cin >> size;

  int arr[size];
  for(int i = 0; i < size; i++) {
    cin > size;
  }

  // precompute
  int hash[13] = {0};
  for(int i = 0; i < size; i++) {
    hash[arr[i]] += 1;
  }

  int q;
  cin >> q;
  while(q--) {
    int number;
    cin >> number;

    //fetch
    cout << hash[number] << endl;
  }

  return 0;
}