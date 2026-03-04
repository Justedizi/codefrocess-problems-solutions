#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int last = -1;
    int res = 0;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      if (last != -1 && nums[i] % 2 == last % 2) {
        res++;
      }
      last = nums[i];
    }
    cout << res << '\n';
  }
}

