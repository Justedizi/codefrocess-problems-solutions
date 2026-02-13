#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<short int> arr(n);
    int neg = 0, pos = 0, res = 0;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] == 1) {
        pos++;
      } else {
        neg++;
      }
    }

    while (pos < neg || neg % 2 == 1) {
      res++;
      pos++;
      neg--;
    }

    cout << res << '\n';
  }
}
