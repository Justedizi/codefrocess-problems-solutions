#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long res = INT_MAX;
    vector<long long> nums(n);
    for (long long i = 0; i < n; i++) {
      cin >> nums[i];
    }
    bool nonZero = true;
    for (int i = 1; i < n; i++) {
      if (nums[i - 1] <= nums[i]) {
        long long diff = nums[i] - nums[i - 1];
        long long op = diff / 2 + 1;
        res = min(op, res);
      } else {
        res = 0;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
