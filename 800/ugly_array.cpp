#include <algorithm>
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
    int mine = 1e9, maxe = 0;

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      mine = min(mine, nums[i]);
      maxe = max(maxe, nums[i]);
    }

    if (mine == maxe) {
      cout << "NO" << '\n';
    } else {
      cout << "YES" << '\n';
      sort(nums.begin(), nums.end());
      cout << maxe << " ";
      for (int i = 0; i < n - 1; i++) {
        cout << nums[i] << " ";
      }
      cout << "\n";
    }
  }
}
