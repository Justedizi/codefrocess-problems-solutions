#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  vector<int> max_a(2 * n + 1, 0);
  vector<int> max_b(2 * n + 1, 0);

  int count = 1;
  for (int i = 1; i <= n; i++) {
    if (i < n && a[i] == a[i - 1]) {
      count++;
    } else {
      max_a[a[i - 1]] = max(max_a[a[i - 1]], count);
      count = 1;
    }
  }

  count = 1;
  for (int i = 1; i <= n; i++) {
    if (i < n && b[i] == b[i - 1]) {
      count++;
    } else {
      max_b[b[i - 1]] = max(max_b[b[i - 1]], count);
      count = 1;
    }
  }

  int ans = 0;
  for (int i = 1; i <= 2 * n; i++) {
    ans = max(ans, max_a[i] + max_b[i]);
  }

  cout << ans << "\n";
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
