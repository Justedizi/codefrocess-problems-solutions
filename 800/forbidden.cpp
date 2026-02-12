#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
      cout << "yes" << '\n';
      cout << n << '\n';
      for (int i = 0; i < n; i++) {
        cout << 1 << '\n';
      }
      cout << '\n';
    } else {
      if (k == 1 || (k == 2 && n % 2 == 1)) {
        cout << "no" << '\n';
      }
    }
  }
  return 0;
}
