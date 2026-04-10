#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int res = 0;
    int min_v = a[0];
    int max_v = a[0];
    for(int i = 1 ; i < n; i++) {
      if(abs(a[i] - min_v) > 2*x || abs(a[i] - max_v) > 2*x) {
        res ++;
        min_v = a[i];
        max_v = a[i];
      }
      min_v = min(min_v, a[i]);
      max_v = max(max_v, a[i]);
    }
    cout << res << endl;

  }
  return 0;
}
