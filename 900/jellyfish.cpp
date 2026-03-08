#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> tools(n);
    long long res = b;
    for (int i = 0; i < n; i++) {
      cin >> tools[i];
      res += (long long)min(tools[i], a - 1);
    }
    cout << res << '\n';
  }
}
