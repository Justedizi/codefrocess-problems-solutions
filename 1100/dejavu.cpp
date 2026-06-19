#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> x(q);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < q; i++)
      cin >> x[i];

    int min_so_far = 1e9;
    for (int i = 0; i < q; i++) {
      if (x[i] < min_so_far) {
        min_so_far = x[i];
        for (int j = 0; j < n; j++) {
          if (a[j] % (1 << x[i]) == 0) {
            a[j] += (1 << (x[i] - 1));
          }
        }
      }
    }
    for (auto num : a)
      cout << num << " ";
    cout << '\n';
  }
  // important note if we take number n divisible by 2^x and add 2^(x-1) to it
  // it is guarented that this nubmer wont be divisible by any x + 1, x + 2, ...
  // thaus we dont need to modify it
}
