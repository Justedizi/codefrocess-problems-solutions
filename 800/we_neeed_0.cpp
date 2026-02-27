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
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      total ^= a[i];
    }
    if (n % 2 == 1) {
      cout << total << '\n';
    } else {
      if (total == 0) {
        cout << 0 << '\n';
      } else {
        cout << -1 << '\n';
      }
    }
  }
}
