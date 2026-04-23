#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    bool dup = false;
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (seen.count(x))
        dup = true;
      seen.insert(x);
    }

    cout << (dup ? "YES\n" : "NO\n");
  }
  return 0;
}
