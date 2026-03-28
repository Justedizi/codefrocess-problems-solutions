#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, d;
    cin >> n;
    cin >> d;
    vector<int> nums(n);
    long long min = 0;
    long long max = 0;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      min += nums[i];
      max += ceil(nums[i] * 1.0 / d);
    }
    min = ceil(min * 1.0 / d);
    cout << min << " " << max << '\n';
  }
  // never combina eelemetns to get max
  // combine all elemetns to get min
  // ceil((x + y) / z) <= ceil( x/ z) + ceil(y/z)
}
