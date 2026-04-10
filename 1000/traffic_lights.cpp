#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    s += s;
    int last_green = -1e9;
    int res = 0;
    // when dealing with cyclic arrays tyr to go backwards or work on
    // duplicated array
    for (int i = 2 * n - 1; i >= 0; i--) {
      if (s[i] == 'g') {
        last_green = i;
      }
      if (s[i] == c) {
        res = max(res, last_green - i);
      }
    }
    cout << res << '\n';
  }

  return 0;
}
