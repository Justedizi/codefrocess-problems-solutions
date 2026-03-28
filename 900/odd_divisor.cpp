#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    bool res = true;
    while (n > 1) {
      if (n % 2 == 1) {
        res = false;
        break;
      }
      n /= 2;
    }
    if (!res)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
}
