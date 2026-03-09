#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> nums(n);
    int res = 0;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    for (int i = 0; i < n; i++) {
      int diff = abs(i + 1 - nums[i]);
      if (diff != 0) {
        if (res == 0)
          res = diff;
        else
          res = gcd(res, diff);
      }
    }
    cout << res << '\n';
  }
}
