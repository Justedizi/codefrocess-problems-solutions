#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    int j = 0;
    unordered_map<char, bool> seen;
    bool res = true;
    for (int i = 0; i < a.size(); i++) {
      if (a[i] == b[j]) {
        j++;
      } else {
        if (seen.find(a[i]) != seen.end()) {
          res = false;
          break;
        }
      }
    }
    if (j == b.size() - 1 && res) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
