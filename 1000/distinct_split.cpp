#include <bits/stdc++.h>
#include <unordered_map>
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
    vector<int> prefix(n, 0);
    vector<int> suffix(n, 0);
    prefix[0] = 1;
    suffix[n - 1] = 1;
    unordered_map<char, bool> seen;
    for (int i = 1; i < n; i++) {
      if (seen.find(s[i]) == seen.end()) {
        prefix[i] = prefix[i - 1] + 1;
        seen[s[i]] = true;
      } else {
        prefix[i] = prefix[i - 1];
      }
    }
    seen.clear();
    for (int i = n - 2; i >= 0; i--) {
      if (seen.find(s[i]) == seen.end()) {
        suffix[i] = suffix[i + 1] + 1;
        seen[s[i]] = true;
      } else {
        suffix[i] = seen[i + 1];
      }
    }
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
      res = max(prefix[i] + suffix[i + 1], res);
    }
    cout << res << '\n';
  }
}
