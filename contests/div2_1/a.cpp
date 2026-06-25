#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long c;
    long long n, k;
    cin >> n >> c >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
      long long diff = c - nums[i];
      if (diff >= 0) {
        c += (nums[i] + min(k, diff)) * 1LL;
        k -= min(k, diff);
      }
    }
    cout << c << '\n';
  }
}
