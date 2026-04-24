#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long x, y, k;
    cin >> x >> y >> k;
    long long needed = k * (y + 1);
    long long craft_enough =
        (needed - 1) / (x - 1) + k + ((needed - 1) % (x - 1) == 0 ? 0 : 1);
    cout << craft_enough << '\n';
  }
  return 0;
}
