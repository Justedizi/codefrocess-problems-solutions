#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    long long c;
    cin >> n >> c;
    vector<int> pictures(n);
    for (int i = 0; i < n; i++)
      cin >> pictures[i];
    long long l = 1;
    long long r = 1e9;
    long long ans = -1;
    while (l <= r) {
      long long sum = 0;
      long long mid = l + (r - l) / 2;
      for (int p : pictures) {
        sum += 1LL * (p + mid * 2) * (p + mid * 2);
        if (sum > c)
          break;
      }
      if (sum <= c) {
        ans = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
