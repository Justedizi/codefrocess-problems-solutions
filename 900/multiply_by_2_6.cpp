#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int div_3 = 0;
    int div_2 = 0;
    while (n > 0 && n % 3 == 0) {
      div_3++;
      n /= 3;
    }
    while (n > 0 && n % 2 == 0) {
      div_2++;
      n /= 2;
    }
    if (n > 1 || div_2 > div_3)
      cout << -1 << '\n';
    else
      cout << div_3 + (div_3 - div_2) << '\n';
  }
}
