#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    int odd = 0;
    int x;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> x;
      if (x % 2 == 1)
        odd++;
    }
    if (odd % 2 == 0) {
      cout << "yes" << '\n';
    } else {
      cout << "no" << '\n';
    }
  }
  return 0;
}
