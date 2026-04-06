#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, q;
    cin >> n >> k >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      a[i] = a[i] > q ? 0 : 1;
    }
    long long consecutive_days = 0;
    long long ways = 0;
    for (auto d : a) {
      if (d)
        consecutive_days++;
      else {
        if (consecutive_days >= k) {
          ways += (consecutive_days - k + 1) * (consecutive_days - k + 2) / 2;
        }
        consecutive_days = 0;
      }
    }
    if (consecutive_days >= k) {
      ways += (consecutive_days - k + 1) * (consecutive_days - k + 2) / 2;
    }
    cout << ways << '\n';
  }
  return 0;
}
