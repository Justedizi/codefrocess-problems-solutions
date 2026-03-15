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
    int max_freq = 0;
    int op = 0;

    for (auto s : freq) {
      max_freq = max(max_freq, s.second);
    }

    while (max_freq < n) {
      op++;
      int diff = n - max_freq;
      int add = min(diff, max_freq);
      op += add;
      max_freq += add;
    }
    cout << op << '\n';
  }
}
