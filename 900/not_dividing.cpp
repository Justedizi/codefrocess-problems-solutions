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

    for (int i = 0; i < n; i++) {
      if (nums[i] == 1) {
        nums[i]++;
      }
    }
    for (int i = 1; i < n; i++) {
      if (nums[i] % nums[i - 1] == 0) {
        nums[i]++;
      }
    }

    for (int i = 0; i < n; i++) {
      cout << nums[i] << " ";
    }
    cout << '\n';
  }
}
