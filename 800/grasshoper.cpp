#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, k;
    cin >> x >> k;
    int i = k;
    int setps = 0;
    if (x % k != 0) {
      cout << 1 << '\n' << x << '\n';
      continue;
    } else {
      cout << 2 << '\n' << x - 1 << " " << 1 << '\n';
    }
  }
}
