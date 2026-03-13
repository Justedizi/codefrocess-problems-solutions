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
    vector<int> nums(n);
    unordered_map<int, int> freq;
    int res;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      freq[nums[i]]++;
    }
    if (freq.size() <= 1) {
      res = 0;
    } else {
      int max_freq = 0;
      for (auto s : freq) {
        max_freq = max(max_freq, s.second);
      }
      res = 2 * (n - max_freq) - max_freq;
    }
    cout << res << '\n';
  }
}
