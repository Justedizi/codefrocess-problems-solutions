#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string s;
  if (!(cin >> n >> s))
    return 0;
  // we need to only find to adjecent characters that are different
  for (int i = 0; i < n - 1; i++) {
    if (s[i] > s[i + 1]) {
      cout << "YES" << "\n";
      cout << i + 1 << " " << i + 2 << "\n";
      return 0;
    }
  }

  cout << "NO" << "\n";
  return 0;
}
