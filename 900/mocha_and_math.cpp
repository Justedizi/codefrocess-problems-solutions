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
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    int res = nums[0];
    for (int i = 1; i < n; i++) {
      res &= nums[i];
    }
    cout << res << '\n';
  }
}
