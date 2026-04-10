#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int largest_divisor = 1;

    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        largest_divisor = n / i;
        break;
      }
    }

    cout << largest_divisor << " " << n - largest_divisor << '\n';
  }

  return 0;
}
