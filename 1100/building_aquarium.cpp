#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  long long x;
  cin >> n >> x;

  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long l = 1;
  long long r = 2e9;
  long long ans = 0;

  while (l <= r) {
    long long mid = l + (r - l) / 2;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
      if (mid > a[i]) {
        sum += (mid - a[i]);
      }
    }

    if (sum <= x) {
      ans = mid;
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
