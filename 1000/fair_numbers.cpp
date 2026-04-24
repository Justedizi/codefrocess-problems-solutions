#include <bits/stdc++.h>
using namespace std;

bool is_fair(long long x) {
  long long tmp = x;
  while (tmp > 0) {
    int d = tmp % 10;
    if (d != 0 && x % d != 0)
      return false;
    tmp /= 10;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    while (!is_fair(n))
      n++;
    cout << n << '\n';
  }
  return 0;
}
