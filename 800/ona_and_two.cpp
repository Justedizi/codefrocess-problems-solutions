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
    int total = 0;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      if (nums[i] == 2)
        total++;
    }
    int ans = -1;
    int curr = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] == 2) {
        curr++;
      }
      if (curr == total - curr) {
        ans = i + 1;
        break;
      }
    }
    cout << ans << '\n';
  }
}
