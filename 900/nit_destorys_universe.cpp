#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> nums(n);
    int blocks = 0;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      if (nums[i] != 0) {
        if (i == 0 || nums[i - 1] == 0) {
          blocks++;
        }
      }
    }

    if (blocks >= 2) {
      cout << 2 << "\n";
    } else {
      cout << blocks << "\n";
    }
  }
  return 0;
}
