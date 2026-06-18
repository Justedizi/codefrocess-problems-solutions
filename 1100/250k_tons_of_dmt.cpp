#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> pref(n + 1,
                           0); // prefix sum indexed from 1 for comvenience
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      pref[i + 1] = pref[i] + a[i];
    };
    long long res = 0;
    for (int div = 1; div <= n; div++) {
      long long min_pref = 1e18;
      long long max_pref = -1;
      if (n % div == 0) {
        for (int i = 0; i < n; i += div) {
          long long block = pref[i + div] - pref[i];
          min_pref = min(min_pref, block);
          max_pref = max(max_pref, block);
        }
      }
      res = max(res, max_pref - min_pref);
    }
    cout << res << '\n';
  }
  return 0;
}
