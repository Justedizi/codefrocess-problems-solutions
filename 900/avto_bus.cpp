#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    if (n < 4 || n % 2 != 0) {
      cout << -1 << '\n';
    } else {
      if (n % 6 == 0) {
        cout << n / 6 << " ";
      } else if (n % 6 == 4 || n % 6 == 2) {
        cout << n / 6 + 1 << " ";
      }
      if (n % 4 == 0 || n % 4 == 2) {
        cout << n / 4 << '\n';
      }
    }
  }
}
