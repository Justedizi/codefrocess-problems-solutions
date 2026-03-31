#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string word;
    cin >> word;
    int zero_c = 0;
    int ones_c = 0;
    for (auto w : word) {
      if (w == '0')
        zero_c++;
      else
        ones_c++;
    }
    if (zero_c == ones_c) {
      if ((word.size() / 2) % 2 == 1) {
        cout << "DA" << '\n';
      } else {
        cout << "NET" << '\n';
      }
    } else {
      if (min(zero_c, ones_c) % 2 == 1) {
        cout << "DA" << '\n';
      } else {
        cout << "NET " << '\n';
      }
    }
  }
}
