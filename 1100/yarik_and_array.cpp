#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long ans = a[0]; // array has to be NON-EMPTY
    long long sum = a[0];
    for (int j = 1; j < n; j++) {
      if (abs(a[j] % 2) ^ abs(a[j - 1] % 2)) {
        // whats better start from scratch or add element
        sum = max(static_cast<long long>(a[j]), sum + a[j]);
      } else {
        // elements with same parity we are forced to start from scratch
        sum = a[j];
      }
      ans = max(ans, sum);
    }

    cout << ans << '\n';
  }
}
