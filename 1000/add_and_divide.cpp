#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int res = 1e9;
    int curr = 0;
    for (int i = 0; i < 32; i++) {
      int nb = b + i;
      curr = i;
      int temp = a;
      if (nb == 1)
        continue; // this will be infinite loop
      while (temp > 0) {
        temp /= nb;
        curr++;
      }
      res = min(res, curr);
    }
    cout << res << '\n';
  }
}
