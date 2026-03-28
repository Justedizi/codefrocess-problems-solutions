#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int step = floor(n * 1.0 / 2);
    vector<int> nums(n * k);
    for (int i = 0; i < n * k; i++) {
      cin >> nums[i];
    }
    long long res = 0;
    int start = n * k - 1 - step;
    while (k > 0) {
      res += nums[start];
      start -= step + 1;
      k--;
    }
    cout << res << '\n';
  }
}
