#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  unordered_set<char> distinct_chars;
  long long total_count = 0;

  // the number of new unique strings we can start is
  // equal to the number of distinct characters in s[0...i].
  for (int i = 0; i < n; i++) {
    distinct_chars.insert(s[i]);
    total_count += distinct_chars.size();
  }

  cout << total_count << "\n";
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
