#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int res = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (a[i - 1] == b[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
          res = max(res, dp[i][j]);
        } else {
          dp[i][j] = 0;
        }
      }
    }
    cout << n + m - 2 * res << '\n';
  }
  return 0;
}
