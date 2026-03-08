#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k, x;
    cin >> n >> k >> x;
    long long max_sum =
        (long long)(n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
    long long min_sum = (long long)(k * (k + 1)) / 2;
    if (x >= min_sum && x <= max_sum) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
