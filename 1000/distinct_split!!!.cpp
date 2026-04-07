#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> prefix(n + 1, 0);
    vector<int> suffix(n + 1, 0);
    unordered_set<char> seen;
    // use set for that it is more convinient instead of unodered map !!!
    // general idea was good
    for (int i = 1; i <= n; i++) {
      seen.insert(s[i - 1]);
      prefix[i] = seen.size();
    }
    seen.clear();
    for (int i = n; i >= 0; i--) {
      seen.insert(s[i - 1]);
      suffix[i] = seen.size();
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
      res = max(prefix[i] + suffix[i + 1], res);
    }
    cout << res << '\n';
  }
}
