#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    vector<long long> nums(n);
    long long zero_c = 0, ones_c = 0;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
      if (nums[i] == 0)
        zero_c++;
      if (nums[i] == 1)
        ones_c++;
    }
    long long ways = pow(2, zero_c) * ones_c;
    cout << ways << '\n';
  }
}
