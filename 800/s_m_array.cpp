#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool res = false;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (__gcd(a[i], a[j]) <= 2) {
          res = true;
          break;
        }
      }
      if (res)
        break;
    }
    if (res) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
}
