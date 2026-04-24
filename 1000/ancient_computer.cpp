#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    unsigned long long a, b;
    cin >> a >> b;
    int res = 0;
    if (a == b) {
      cout << res << '\n';
    } else {
      if (b > a) {
        swap(a, b);
      }
      while (a > b && !(a & 1)) {
        a = a >> 1;
        res++;
      }
      if (a == b)
        cout << ceil(1.0 * res / 3) << '\n';
      else
        cout << -1 << '\n';
    }
  }
  return 0;
}
