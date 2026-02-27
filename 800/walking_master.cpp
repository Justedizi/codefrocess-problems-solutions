#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = 0;
    if (d < b) {
      cout << -1 << '\n';
      continue;
    } else {
      a += d - b;
      res += d - b;
      if (a < c) {
        cout << -1 << '\n';
        continue;
      } else {
        res += a - c;
        cout << res << '\n';
      }
    }
  }
}
