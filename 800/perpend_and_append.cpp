#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    int res = 0;
    while (l <= r) {

      if (s[l] != s[r]) {
        res++;
      }

      else {
        break;
      }
      l++;
      r--;
    }
    cout << n - res * 2 << '\n';
  }
}
